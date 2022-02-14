
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adi_port {struct adi* adi; } ;
struct adi {int ret; int* data; scalar_t__ idx; } ;



__attribute__((used)) static void FUNC_0(struct adi_port *VAR_0, int VAR_1)
{
 int VAR_2;
 struct adi *VAR_3 = VAR_0->adi;

 VAR_3[0].idx = VAR_3[1].idx = 0;

 if (VAR_3[0].ret <= 0 || VAR_3[1].ret <= 0) return;
 if (VAR_3[0].data[0] & 0x20 || ~VAR_3[1].data[0] & 0x20) return;

 for (VAR_2 = 1; VAR_2 <= VAR_3[1].ret; VAR_2++)
  VAR_3[0].data[((VAR_1 - 1) >> 1) + VAR_2 + 1] = VAR_3[1].data[VAR_2];

 VAR_3[0].ret += VAR_3[1].ret;
 VAR_3[1].ret = -1;
}
