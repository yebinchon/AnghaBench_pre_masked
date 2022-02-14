
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ResourceOwner ;
typedef int JobDirectoryEntry ;


 scalar_t__ FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int *) ;
 int * VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int *,int) ;

void
FUNC_3(ResourceOwner VAR_6)
{
 int VAR_7 = 0;


 if (!VAR_4)
 {
  FUNC_1(VAR_0, ((void*)0));
  VAR_4 = 1;
 }

 if (VAR_3 == ((void*)0))
 {
  VAR_7 = 16;
  VAR_3 =
   (JobDirectoryEntry *) FUNC_0(VAR_5,
              VAR_7 * sizeof(JobDirectoryEntry));
  VAR_1 = VAR_7;
 }
 else if (VAR_2 + 1 > VAR_1)
 {
  VAR_7 = VAR_1 * 2;
  VAR_3 =
   (JobDirectoryEntry *) FUNC_2(VAR_3,
             VAR_7 * sizeof(JobDirectoryEntry));
  VAR_1 = VAR_7;
 }
}
