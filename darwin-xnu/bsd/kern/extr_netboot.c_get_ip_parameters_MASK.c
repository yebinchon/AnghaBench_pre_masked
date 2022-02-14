
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {int dummy; } ;
struct dhcp {struct in_addr dp_yiaddr; } ;
typedef int dhcpol_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (char*) ;
 void* FUNC_1 (void*,int ,int*) ;
 int FUNC_2 (void*) ;
 scalar_t__ FUNC_3 (int *,int ,int*,int *) ;
 int FUNC_4 (int *,struct dhcp const*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (char*) ;

__attribute__((used)) static boolean_t
FUNC_6(struct in_addr * VAR_5, struct in_addr * VAR_6,
     struct in_addr * VAR_7)
{
    void * VAR_8;
    const void * VAR_9;
    int VAR_10;


    VAR_8 = FUNC_0("/chosen");
    if (VAR_8 == ((void*)0)) {
 return (VAR_2);
    }
    VAR_9 = FUNC_1(VAR_8, VAR_1, &VAR_10);
    if (VAR_9 != ((void*)0) && VAR_10 >= (int)sizeof(struct dhcp)) {
 FUNC_5("netboot: retrieving IP information from DHCP response\n");
    }
    else {
 VAR_9 = FUNC_1(VAR_8, VAR_0, &VAR_10);
 if (VAR_9 != ((void*)0) && VAR_10 >= (int)sizeof(struct dhcp)) {
     FUNC_5("netboot: retrieving IP information from BOOTP response\n");
 }
    }
    if (VAR_9 != ((void*)0)) {
 const struct in_addr * VAR_11;
 int VAR_12;
 dhcpol_t VAR_13;
 const struct dhcp * VAR_14;

 VAR_14 = (const struct dhcp *)VAR_9;
 (void)FUNC_4(&VAR_13, VAR_14, VAR_10);
 *VAR_5 = VAR_14->dp_yiaddr;
 VAR_11 = (const struct in_addr *)
     FUNC_3(&VAR_13,
   VAR_4, &VAR_12, ((void*)0));
 if (VAR_11) {
     *VAR_6 = *VAR_11;
 }
 VAR_11 = (const struct in_addr *)
     FUNC_3(&VAR_13, VAR_3, &VAR_12, ((void*)0));
 if (VAR_11) {
     *VAR_7 = *VAR_11;
 }
    }
    FUNC_2(VAR_8);
    return (VAR_9 != ((void*)0));
}
