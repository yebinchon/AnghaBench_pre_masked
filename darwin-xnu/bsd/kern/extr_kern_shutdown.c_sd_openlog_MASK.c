
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vfs_context_t ;
struct timeval {int tv_sec; } ;
typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 int FUNC_0 (struct timeval*) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (int ,char*,int ) ;
 int VAR_5 ;
 int FUNC_3 (char*,int,int,int ,int *,int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_5(vfs_context_t VAR_6)
{
 int VAR_7 = 0;
 struct timeval VAR_8;


 if ((VAR_7 = FUNC_3(VAR_4, (VAR_2 | VAR_0 | VAR_3), 0644, 0, &VAR_5, VAR_6))) {
  FUNC_1("Failed to open %s: error %d\n", VAR_4, VAR_7);
  VAR_5 = VAR_1;
  return VAR_7;
 }

 FUNC_4(VAR_5, (off_t)0, 0, VAR_6);


 FUNC_0(&VAR_8);
 FUNC_2(VAR_6, "Process shutdown log.  Current time is %lu (in seconds).\n\n", VAR_8.tv_sec);

 return 0;
}
