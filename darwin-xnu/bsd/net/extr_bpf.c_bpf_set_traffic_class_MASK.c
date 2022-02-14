
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_d {int bd_traffic_class; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1(struct bpf_d *VAR_1, int VAR_2)
{
 int VAR_3 = 0;

 if (!FUNC_0(VAR_2))
  VAR_3 = VAR_0;
 else
  VAR_1->bd_traffic_class = VAR_2;

 return (VAR_3);
}
