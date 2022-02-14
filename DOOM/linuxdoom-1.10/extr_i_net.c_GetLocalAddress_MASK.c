
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostent {scalar_t__* h_addr_list; } ;
typedef int hostname ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 struct hostent* FUNC_1 (char*) ;
 int FUNC_2 (char*,int) ;

int FUNC_3 (void)
{
    char VAR_1[1024];
    struct hostent* VAR_2;
    int VAR_3;


    VAR_3 = FUNC_2 (VAR_1, sizeof(VAR_1));
    if (VAR_3 == -1)
 FUNC_0 ("GetLocalAddress : gethostname: errno %d",VAR_0);

    VAR_2 = FUNC_1 (VAR_1);
    if (!VAR_2)
 FUNC_0 ("GetLocalAddress : gethostbyname: couldn't get local host");

    return *(int *)VAR_2->h_addr_list[0];
}
