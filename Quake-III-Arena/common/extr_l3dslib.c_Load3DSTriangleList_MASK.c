
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tshort ;
typedef int triangle_t ;
typedef int FILE ;


 short VAR_0 ;
 int FUNC_0 (char*) ;
 short VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char*,char*) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (short*,int,int,int *) ;
 int FUNC_7 (int *,int ,int ) ;
 scalar_t__ VAR_5 ;
 int * FUNC_8 (int) ;
 scalar_t__ VAR_6 ;
 int * VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;

void FUNC_9 (char *VAR_12, triangle_t **VAR_13, int *VAR_14)
{
 FILE *VAR_15;
 short int VAR_16;

 VAR_4 = 0;
 VAR_5 = 0;
 VAR_6 = 0;
 VAR_9 = 0;
 VAR_11 = 0;
 VAR_10 = 0;

 if ((VAR_15 = FUNC_4(VAR_12, "rb")) == 0) {
  FUNC_5(VAR_8,"reader: could not open file '%s'\n", VAR_12);
  FUNC_2(0);
 }

 FUNC_6(&VAR_16, sizeof(VAR_16), 1, VAR_15);



 if ((VAR_16 != VAR_1) && (VAR_16 != VAR_0)) {
  FUNC_5(VAR_8,"File is not a 3DS file.\n");
  FUNC_2(0);
 }


 FUNC_7(VAR_15, 0, VAR_3);

 VAR_7 = FUNC_8 (VAR_2 * sizeof(triangle_t));

 *VAR_13 = VAR_7;



 FUNC_1 (VAR_15);

 if (VAR_11 || VAR_10)
  FUNC_0 ("Incomplete triangle set");

 *VAR_14 = VAR_9;

 FUNC_3 (VAR_15);
}
