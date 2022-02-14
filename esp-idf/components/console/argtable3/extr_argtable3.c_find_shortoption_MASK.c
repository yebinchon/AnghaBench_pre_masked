
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arg_hdr {int flag; scalar_t__ shortopts; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,char) ;

__attribute__((used)) static
int FUNC_1(struct arg_hdr * *VAR_1, char VAR_2)
{
    int VAR_3;
    for(VAR_3 = 0; !(VAR_1[VAR_3]->flag & VAR_0); VAR_3++)
    {
        if (VAR_1[VAR_3]->shortopts &&
            FUNC_0(VAR_1[VAR_3]->shortopts, VAR_2))
            return VAR_3;
    }
    return -1;
}
