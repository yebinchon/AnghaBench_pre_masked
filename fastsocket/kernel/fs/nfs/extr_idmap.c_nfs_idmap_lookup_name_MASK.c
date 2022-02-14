
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;
typedef int id_str ;
typedef int __u32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,int,char const*,char*,size_t) ;
 int FUNC_1 (char*,int,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(__u32 VAR_2, const char *VAR_3, char *VAR_4, size_t VAR_5)
{
 char VAR_6[VAR_1];
 int VAR_7;
 ssize_t VAR_8;

 VAR_7 = FUNC_1(VAR_6, sizeof(VAR_6), "%u", VAR_2);
 VAR_8 = FUNC_0(VAR_6, VAR_7, VAR_3, VAR_4, VAR_5);
 if (VAR_8 < 0)
  return -VAR_0;
 return VAR_8;
}
