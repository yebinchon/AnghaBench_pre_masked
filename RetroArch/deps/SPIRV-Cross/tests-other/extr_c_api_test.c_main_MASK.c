
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * spvc_resources ;
typedef int * spvc_parsed_ir ;
typedef int * spvc_context ;
typedef int * spvc_compiler_options ;
typedef int * spvc_compiler ;
typedef int SpvId ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int *) ;
 int VAR_10 ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,char const*) ;
 scalar_t__ FUNC_7 (char*,int **,size_t*) ;
 int FUNC_8 (int *,int **) ;
 int FUNC_9 (int *,int **) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,int ,int) ;
 int FUNC_12 (int **) ;
 int FUNC_13 (int *,int ,int *,int ,int **) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int *,size_t,int **) ;
 int FUNC_16 (int *,int ,int *) ;
 char* FUNC_17 () ;
 int FUNC_18 (unsigned int*,unsigned int*,unsigned int*) ;
 int VAR_11 ;
 unsigned int FUNC_19 (char*,int *,int ) ;

int FUNC_20(int VAR_12, char **VAR_13)
{
 const char *VAR_14 = ((void*)0);

 spvc_context VAR_15 = ((void*)0);
 spvc_parsed_ir VAR_16 = ((void*)0);
 spvc_compiler VAR_17 = ((void*)0);
 spvc_compiler VAR_18 = ((void*)0);
 spvc_compiler VAR_19 = ((void*)0);
 spvc_compiler VAR_20 = ((void*)0);
 spvc_compiler VAR_21 = ((void*)0);
 spvc_compiler VAR_22 = ((void*)0);
 spvc_compiler_options VAR_23 = ((void*)0);
 spvc_resources VAR_24 = ((void*)0);
 SpvId *VAR_25 = ((void*)0);
 size_t VAR_26 = 0;

 VAR_14 = FUNC_17();
 if (!VAR_14 || *VAR_14 == '\0')
  return 1;

 FUNC_6("Revision: %s\n", VAR_14);

 if (VAR_12 != 5)
  return 1;

 if (FUNC_7(VAR_13[1], &VAR_25, &VAR_26) < 0)
  return 1;

 unsigned VAR_27, VAR_28, VAR_29;
 FUNC_18(&VAR_27, &VAR_28, &VAR_29);
 if (VAR_27 != FUNC_19(VAR_13[2], ((void*)0), 0))
 {
  FUNC_4(VAR_11, "VERSION_MAJOR mismatch!\n");
  return 1;
 }

 if (VAR_28 != FUNC_19(VAR_13[3], ((void*)0), 0))
 {
  FUNC_4(VAR_11, "VERSION_MINOR mismatch!\n");
  return 1;
 }

 if (VAR_29 != FUNC_19(VAR_13[4], ((void*)0), 0))
 {
  FUNC_4(VAR_11, "VERSION_PATCH mismatch!\n");
  return 1;
 }

 FUNC_0(FUNC_12(&VAR_15));
 FUNC_16(VAR_15, VAR_10, ((void*)0));
 FUNC_0(FUNC_15(VAR_15, VAR_25, VAR_26, &VAR_16));
 FUNC_0(FUNC_13(VAR_15, VAR_1, VAR_16, VAR_6, &VAR_17));
 FUNC_0(FUNC_13(VAR_15, VAR_2, VAR_16, VAR_6, &VAR_18));
 FUNC_0(FUNC_13(VAR_15, VAR_4, VAR_16, VAR_6, &VAR_19));
 FUNC_0(FUNC_13(VAR_15, VAR_0, VAR_16, VAR_6, &VAR_20));
 FUNC_0(FUNC_13(VAR_15, VAR_3, VAR_16, VAR_6, &VAR_21));
 FUNC_0(FUNC_13(VAR_15, VAR_5, VAR_16, VAR_7, &VAR_22));

 FUNC_0(FUNC_8(VAR_22, &VAR_23));
 FUNC_0(FUNC_10(VAR_22, VAR_23));
 FUNC_0(FUNC_8(VAR_21, &VAR_23));
 FUNC_0(FUNC_10(VAR_21, VAR_23));
 FUNC_0(FUNC_8(VAR_20, &VAR_23));
 FUNC_0(FUNC_10(VAR_20, VAR_23));
 FUNC_0(FUNC_8(VAR_19, &VAR_23));
 FUNC_0(FUNC_10(VAR_19, VAR_23));
 FUNC_0(FUNC_8(VAR_18, &VAR_23));
 FUNC_0(FUNC_11(VAR_23, VAR_8, 50));
 FUNC_1(FUNC_11(VAR_23, VAR_9, 1));
 FUNC_0(FUNC_10(VAR_18, VAR_23));
 FUNC_0(FUNC_8(VAR_17, &VAR_23));
 FUNC_0(FUNC_10(VAR_17, VAR_23));

 FUNC_0(FUNC_9(VAR_22, &VAR_24));
 FUNC_3(VAR_22, VAR_24);
 FUNC_2(VAR_17, "GLSL");
 FUNC_2(VAR_18, "HLSL");
 FUNC_2(VAR_19, "MSL");
 FUNC_2(VAR_21, "JSON");
 FUNC_2(VAR_20, "CPP");

 FUNC_14(VAR_15);
 FUNC_5(VAR_25);
 return 0;
}
