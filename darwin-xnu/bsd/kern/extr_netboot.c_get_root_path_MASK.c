
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dhcp {int dummy; } ;
typedef int dhcpol_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (char*) ;
 void* FUNC_1 (void*,int ,int*) ;
 int FUNC_2 (void*) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int *,int ,int*,int *) ;
 int FUNC_4 (int *,struct dhcp const*,int) ;
 int VAR_4 ;
 int FUNC_5 (char*,char const*,int) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static boolean_t
FUNC_7(char * VAR_5)
{
    void * VAR_6;
    boolean_t VAR_7 = VAR_2;
    const void * VAR_8;
    int VAR_9;

    VAR_6 = FUNC_0("/chosen");
    if (VAR_6 == ((void*)0)) {
 return (VAR_2);
    }
    VAR_8 = FUNC_1(VAR_6, VAR_1, &VAR_9);
    if (VAR_8 != ((void*)0) && VAR_9 >= (int)sizeof(struct dhcp)) {
 FUNC_6("netboot: retrieving root path from BSDP response\n");
    }
    else {
 VAR_8 = FUNC_1(VAR_6, VAR_0,
     &VAR_9);
 if (VAR_8 != ((void*)0) && VAR_9 >= (int)sizeof(struct dhcp)) {
     FUNC_6("netboot: retrieving root path from BOOTP response\n");
 }
    }
    if (VAR_8 != ((void*)0)) {
 int VAR_10;
 dhcpol_t VAR_11;
 const char * VAR_12;
 const struct dhcp * VAR_13;

 VAR_13 = (const struct dhcp *)VAR_8;
 (void)FUNC_4(&VAR_11, VAR_13, VAR_9);

 VAR_12 = (const char *)FUNC_3(&VAR_11,
      VAR_4, &VAR_10, ((void*)0));
 if (VAR_12) {
     FUNC_5(VAR_5, VAR_12, VAR_10);
     VAR_5[VAR_10] = '\0';
     VAR_7 = VAR_3;
 }
    }
    FUNC_2(VAR_6);
    return (VAR_7);

}
