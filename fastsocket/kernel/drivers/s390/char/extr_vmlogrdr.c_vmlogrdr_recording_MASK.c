
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmlogrdr_priv_t {char* recording_name; } ;
typedef int cp_response ;
typedef int cp_command ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int,int *) ;
 int FUNC_1 (char*,int,int) ;
 int VAR_1 ;
 int FUNC_2 (char*,int,char*,char*,char*,...) ;
 scalar_t__ FUNC_3 (char*,char*) ;

__attribute__((used)) static int FUNC_4(struct vmlogrdr_priv_t * VAR_2,
         int VAR_3, int VAR_4)
{

 char VAR_5[80];
 char VAR_6[160];
 char *VAR_7, *VAR_8;
 int VAR_9;

 VAR_7 = ((VAR_3 == 1) ? "ON" : "OFF");
 VAR_8 = ((VAR_1 == 1) ? " QID * " : "");
 if (VAR_4 && (VAR_3 == 1)) {
  FUNC_1(VAR_5, 0x00, sizeof(VAR_5));
  FUNC_1(VAR_6, 0x00, sizeof(VAR_6));
  FUNC_2(VAR_5, sizeof(VAR_5),
    "RECORDING %s PURGE %s",
    VAR_2->recording_name,
    VAR_8);
  FUNC_0(VAR_5, VAR_6, sizeof(VAR_6), ((void*)0));
 }

 FUNC_1(VAR_5, 0x00, sizeof(VAR_5));
 FUNC_1(VAR_6, 0x00, sizeof(VAR_6));
 FUNC_2(VAR_5, sizeof(VAR_5), "RECORDING %s %s %s",
  VAR_2->recording_name,
  VAR_7,
  VAR_8);
 FUNC_0(VAR_5, VAR_6, sizeof(VAR_6), ((void*)0));






 if (FUNC_3(VAR_6,"Command complete"))
  VAR_9 = 0;
 else
  VAR_9 = -VAR_0;





 if (VAR_4 && (VAR_3 == 0)) {
  FUNC_1(VAR_5, 0x00, sizeof(VAR_5));
  FUNC_1(VAR_6, 0x00, sizeof(VAR_6));
  FUNC_2(VAR_5, sizeof(VAR_5),
    "RECORDING %s PURGE %s",
    VAR_2->recording_name,
    VAR_8);
  FUNC_0(VAR_5, VAR_6, sizeof(VAR_6), ((void*)0));
 }

 return VAR_9;
}
