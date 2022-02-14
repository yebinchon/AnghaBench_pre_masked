
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adb_request {size_t* data; scalar_t__ reply_expected; } ;


 struct adb_request* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int ** VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (size_t) ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static void
FUNC_3(void)
{
 unsigned long VAR_8;
 struct adb_request *VAR_9;



 FUNC_1(VAR_8);
 VAR_9 = VAR_0;
 if (VAR_9 == 0 || VAR_5 != VAR_3
     || (VAR_9->reply_expected && VAR_6))
  goto out;

 VAR_5 = VAR_7;
 VAR_1 = 1;
 VAR_2 = VAR_4[VAR_9->data[0]][0];


 FUNC_2(VAR_9->data[0]);

out:
 FUNC_0(VAR_8);
}
