
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Scsi_Host {int dummy; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned char FUNC_0 (int ) ;
 int FUNC_1 (struct Scsi_Host*,unsigned char*,int*,unsigned char**) ;
 int FUNC_2 (int ,int) ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 int FUNC_3 (unsigned char) ;
 unsigned char VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_4 (struct Scsi_Host *VAR_10)
{
    unsigned char VAR_11, *VAR_12, VAR_13;
    int VAR_14;


    FUNC_2(VAR_4, VAR_3 | VAR_2);
    while (!((VAR_11 = FUNC_0(VAR_8)) & VAR_7));

    FUNC_2(VAR_9, FUNC_3(VAR_11));

    if ((VAR_11 & VAR_5) != VAR_6) {
 FUNC_2(VAR_4, VAR_3 | VAR_2 |
        VAR_1);
 while (FUNC_0(VAR_8) & VAR_7);
 FUNC_2(VAR_4, VAR_3 | VAR_2);
    }

    VAR_11 = VAR_0;
    VAR_12 = &VAR_11;
    VAR_14 = 1;
    VAR_13 = VAR_6;
    FUNC_1 (VAR_10, &VAR_13, &VAR_14, &VAR_12);






    return VAR_14 ? -1 : 0;
}
