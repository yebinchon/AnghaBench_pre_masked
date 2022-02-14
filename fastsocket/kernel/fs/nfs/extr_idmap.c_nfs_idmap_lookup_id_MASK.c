
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;
typedef scalar_t__ __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,size_t,char const*,char*,int) ;
 int FUNC_1 (char*,int,long*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_2, size_t VAR_3,
    const char *VAR_4, __u32 *VAR_5)
{
 char VAR_6[VAR_1];
 long VAR_7;
 ssize_t VAR_8;
 int VAR_9 = 0;

 VAR_8 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_6, VAR_1);
 if (VAR_8 <= 0) {
  VAR_9 = -VAR_0;
 } else {
  VAR_9 = FUNC_1(VAR_6, 10, &VAR_7);
  *VAR_5 = (__u32)VAR_7;
 }
 return VAR_9;
}
