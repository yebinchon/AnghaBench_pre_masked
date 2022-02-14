
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int ,int ) ;

__attribute__((used)) static int FUNC_1(short *VAR_2, short VAR_3, short VAR_4)
{
    int VAR_5, VAR_6 = 0;

    for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
        int VAR_7 = VAR_2[VAR_5]-VAR_4;
        VAR_7 = ((VAR_7>>(VAR_3-1))+1)>>1;
        VAR_6 += FUNC_0(VAR_7, 0, VAR_0);
    }

    return VAR_6;
}
