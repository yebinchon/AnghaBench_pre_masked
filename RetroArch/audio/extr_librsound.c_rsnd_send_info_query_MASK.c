
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
struct TYPE_4__ {int ctl_socket; } ;
struct TYPE_5__ {TYPE_1__ conn; scalar_t__ total_written; } ;
typedef TYPE_2__ rsound_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,char*,scalar_t__,int ) ;
 int FUNC_1 (char*,int,char*,int,...) ;
 scalar_t__ FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(rsound_t *VAR_1)
{
   char VAR_2[VAR_0];
   char VAR_3[VAR_0];

   FUNC_1(VAR_2, VAR_0 - 1, " INFO %lld", (long long int)VAR_1->total_written);
   VAR_2[VAR_0 - 1] = '\0';
   FUNC_1(VAR_3, VAR_0 - 1, "RSD%5d%s", (int)FUNC_2(VAR_2), VAR_2);
   VAR_3[VAR_0 - 1] = '\0';

   if ( FUNC_0(VAR_1->conn.ctl_socket, VAR_3, FUNC_2(VAR_3), 0) != (ssize_t)FUNC_2(VAR_3) )
      return -1;

   return 0;
}
