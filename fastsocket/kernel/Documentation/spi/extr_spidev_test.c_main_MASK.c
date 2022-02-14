
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int VAR_8 ;
 int FUNC_1 (int,int ,int*) ;
 int VAR_9 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,char**) ;
 int FUNC_5 (char*,int,...) ;
 int VAR_10 ;
 int FUNC_6 (int) ;

int FUNC_7(int VAR_11, char *VAR_12[])
{
 int VAR_13 = 0;
 int VAR_14;

 FUNC_4(VAR_11, VAR_12);

 VAR_14 = FUNC_2(VAR_8, VAR_0);
 if (VAR_14 < 0)
  FUNC_3("can't open device");




 VAR_13 = FUNC_1(VAR_14, VAR_6, &VAR_9);
 if (VAR_13 == -1)
  FUNC_3("can't set spi mode");

 VAR_13 = FUNC_1(VAR_14, VAR_3, &VAR_9);
 if (VAR_13 == -1)
  FUNC_3("can't get spi mode");




 VAR_13 = FUNC_1(VAR_14, VAR_4, &VAR_7);
 if (VAR_13 == -1)
  FUNC_3("can't set bits per word");

 VAR_13 = FUNC_1(VAR_14, VAR_1, &VAR_7);
 if (VAR_13 == -1)
  FUNC_3("can't get bits per word");




 VAR_13 = FUNC_1(VAR_14, VAR_5, &VAR_10);
 if (VAR_13 == -1)
  FUNC_3("can't set max speed hz");

 VAR_13 = FUNC_1(VAR_14, VAR_2, &VAR_10);
 if (VAR_13 == -1)
  FUNC_3("can't get max speed hz");

 FUNC_5("spi mode: %d\n", VAR_9);
 FUNC_5("bits per word: %d\n", VAR_7);
 FUNC_5("max speed: %d Hz (%d KHz)\n", VAR_10, VAR_10/1000);

 FUNC_6(VAR_14);

 FUNC_0(VAR_14);

 return VAR_13;
}
