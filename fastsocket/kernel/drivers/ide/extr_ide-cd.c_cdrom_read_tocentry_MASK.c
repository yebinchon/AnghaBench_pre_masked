
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_sense {int dummy; } ;
typedef int ide_drive_t ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,unsigned char*,int ,char*,int*,struct request_sense*,int ,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (unsigned char*,int ,int) ;

__attribute__((used)) static int FUNC_3(ide_drive_t *VAR_4, int VAR_5, int VAR_6,
    int VAR_7, char *VAR_8, int VAR_9,
    struct request_sense *VAR_10)
{
 unsigned char VAR_11[VAR_0];

 FUNC_1(VAR_2, "enter");

 FUNC_2(VAR_11, 0, VAR_0);

 VAR_11[0] = VAR_1;
 VAR_11[6] = VAR_5;
 VAR_11[7] = (VAR_9 >> 8);
 VAR_11[8] = (VAR_9 & 0xff);
 VAR_11[9] = (VAR_7 << 6);

 if (VAR_6)
  VAR_11[1] = 2;

 return FUNC_0(VAR_4, VAR_11, 0, VAR_8, &VAR_9, VAR_10, 0, VAR_3);
}
