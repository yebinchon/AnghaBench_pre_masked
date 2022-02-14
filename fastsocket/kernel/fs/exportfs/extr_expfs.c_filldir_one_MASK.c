
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct getdents_callback {scalar_t__ ino; char* name; int found; int sequence; } ;
typedef int loff_t ;


 int FUNC_0 (char*,char const*,int) ;

__attribute__((used)) static int FUNC_1(void * VAR_0, const char * VAR_1, int VAR_2,
   loff_t VAR_3, u64 VAR_4, unsigned int VAR_5)
{
 struct getdents_callback *VAR_6 = VAR_0;
 int VAR_7 = 0;

 VAR_6->sequence++;
 if (VAR_6->ino == VAR_4) {
  FUNC_0(VAR_6->name, VAR_1, VAR_2);
  VAR_6->name[VAR_2] = '\0';
  VAR_6->found = 1;
  VAR_7 = -1;
 }
 return VAR_7;
}
