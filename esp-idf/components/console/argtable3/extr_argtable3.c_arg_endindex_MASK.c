
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arg_hdr {int flag; } ;


 int VAR_0 ;

__attribute__((used)) static
int FUNC_0(struct arg_hdr * *VAR_1)
{
    int VAR_2 = 0;
    while (!(VAR_1[VAR_2]->flag & VAR_0))
        VAR_2++;
    return VAR_2;
}
