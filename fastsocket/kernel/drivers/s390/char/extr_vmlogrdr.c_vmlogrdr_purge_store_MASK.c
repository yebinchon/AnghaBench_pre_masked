
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmlogrdr_priv_t {char* recording_name; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
typedef int cp_response ;
typedef int cp_command ;


 size_t VAR_0 ;
 int FUNC_0 (char*,char*,int,int *) ;
 struct vmlogrdr_priv_t* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,int,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (char*,int,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device * VAR_2,
        struct device_attribute *VAR_3,
        const char * VAR_4, size_t VAR_5)
{

 char VAR_6[80];
 char VAR_7[80];
 struct vmlogrdr_priv_t *VAR_8 = FUNC_1(VAR_2);

 if (VAR_4[0] != '1')
  return -VAR_0;

 FUNC_2(VAR_6, 0x00, sizeof(VAR_6));
 FUNC_2(VAR_7, 0x00, sizeof(VAR_7));
 if (VAR_1)
  FUNC_3(VAR_6, sizeof(VAR_6),
    "RECORDING %s PURGE QID * ",
    VAR_8->recording_name);
 else
  FUNC_3(VAR_6, sizeof(VAR_6),
    "RECORDING %s PURGE ",
    VAR_8->recording_name);

 FUNC_0(VAR_6, VAR_7, sizeof(VAR_7), ((void*)0));

 return VAR_5;
}
