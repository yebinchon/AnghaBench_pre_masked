
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct layer2 {int next_id; int tei; int sapi; } ;



__attribute__((used)) static u_int
FUNC_0(struct layer2 *VAR_0)
{
 u_int VAR_1;

 VAR_1 = VAR_0->next_id++;
 if (VAR_1 == 0x7fff)
  VAR_0->next_id = 1;
 VAR_1 <<= 16;
 VAR_1 |= VAR_0->tei << 8;
 VAR_1 |= VAR_0->sapi;
 return VAR_1;
}
