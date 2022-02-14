
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct Channel {int chan; int cs; } ;
struct TYPE_3__ {int Length; } ;
typedef TYPE_1__ capi_msg ;


 int FUNC_0 (int ,char*,char*,int ,char*) ;
 int FUNC_1 (char*,int *,int) ;
 char* VAR_0 ;

__attribute__((used)) static void
FUNC_2(struct Channel *VAR_1, capi_msg *VAR_2)
{
 char *VAR_3 = VAR_0;

 VAR_3 += FUNC_1(VAR_3, (u_char *)VAR_2, (VAR_2->Length>50)? 50: VAR_2->Length);
 VAR_3--;
 *VAR_3= 0;
 FUNC_0(VAR_1->cs, "Ch", "%d CAPIMSG %s", VAR_1->chan, VAR_0);
}
