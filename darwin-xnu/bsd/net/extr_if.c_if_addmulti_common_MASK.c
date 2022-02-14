
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {scalar_t__ ss_len; } ;
typedef struct sockaddr {scalar_t__ sa_family; } const sockaddr ;
struct ifnet {int if_flags; scalar_t__ if_updatemcasts; } ;
struct ifmultiaddr {struct sockaddr const* ifma_addr; struct ifnet* ifma_ifp; struct ifmultiaddr* ifma_ll; } ;
typedef int storage ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sockaddr const*,int ) ;
 int VAR_5 ;
 int FUNC_1 (struct ifmultiaddr*) ;
 int FUNC_2 (struct ifmultiaddr*) ;
 int FUNC_3 (struct ifmultiaddr*) ;
 int FUNC_4 (struct ifmultiaddr*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (int) ;
 struct sockaddr const* FUNC_6 (struct sockaddr const*) ;
 int FUNC_7 (struct ifnet*,struct sockaddr const*,struct sockaddr const*,int) ;
 int FUNC_8 (struct ifnet*,struct sockaddr const*,struct ifmultiaddr**,int) ;
 int FUNC_9 (struct ifnet*,struct ifmultiaddr*,int) ;
 struct ifmultiaddr* FUNC_10 (int ) ;
 int FUNC_11 (struct ifmultiaddr*) ;
 int FUNC_12 (struct ifnet*,int ,int ,int *) ;
 int FUNC_13 (struct ifnet*) ;
 int FUNC_14 (struct ifnet*) ;
 int FUNC_15 (int ,struct ifmultiaddr*) ;

__attribute__((used)) static int
FUNC_16(struct ifnet *VAR_10, const struct sockaddr *VAR_11,
    struct ifmultiaddr **VAR_12, int VAR_13)
{
 struct sockaddr_storage VAR_14;
 struct sockaddr *VAR_15 = ((void*)0);
 struct sockaddr *VAR_16 = ((void*)0);
 int VAR_17 = 0, VAR_18 = 0, VAR_19;
 struct ifmultiaddr *VAR_20 = ((void*)0);
 struct ifmultiaddr *VAR_21 = ((void*)0);


 FUNC_5(!VAR_13 || VAR_11->sa_family == VAR_1 ||
     VAR_11->sa_family == VAR_0);


 if (VAR_11->sa_family == VAR_0 || VAR_11->sa_family == VAR_1) {
  VAR_16 = FUNC_6(VAR_11);
  if (VAR_16 == ((void*)0)) {
   VAR_17 = VAR_3;
   goto cleanup;
  }
  VAR_11 = VAR_16;
 }

 FUNC_14(VAR_10);
 if (!(VAR_10->if_flags & VAR_5)) {
  VAR_17 = VAR_2;
  FUNC_13(VAR_10);
  goto cleanup;
 }


 VAR_17 = FUNC_8(VAR_10, VAR_11, VAR_12, VAR_13);
 FUNC_13(VAR_10);
 if (VAR_17 == 0)
  goto cleanup;






 VAR_17 = FUNC_7(VAR_10, VAR_11, (struct sockaddr *)&VAR_14,
     sizeof (VAR_14));
 if (VAR_17 == 0 && VAR_14.ss_len != 0) {
  VAR_15 = FUNC_6((struct sockaddr *)&VAR_14);
  if (VAR_15 == ((void*)0)) {
   VAR_17 = VAR_3;
   goto cleanup;
  }

  VAR_21 = FUNC_10(VAR_7);
  if (VAR_21 == ((void*)0)) {
   VAR_17 = VAR_3;
   goto cleanup;
  }
 }


 if (VAR_17 == VAR_4)
  VAR_17 = 0;
 else if (VAR_17 != 0)
  goto cleanup;


 if (VAR_16 == ((void*)0)) {
  VAR_16 = FUNC_6(VAR_11);
  if (VAR_16 == ((void*)0)) {
   VAR_17 = VAR_3;
   goto cleanup;
  }
 }
 VAR_20 = FUNC_10(VAR_7);
 if (VAR_20 == ((void*)0)) {
  VAR_17 = VAR_3;
  goto cleanup;
 }

 FUNC_14(VAR_10);



 VAR_17 = FUNC_8(VAR_10, VAR_11, VAR_12, VAR_13);
 if (VAR_17 == 0) {
  FUNC_13(VAR_10);
  goto cleanup;
 }

 if (VAR_21 != ((void*)0)) {
  FUNC_5(!VAR_13);
  if (FUNC_8(VAR_10, VAR_15, &VAR_20->ifma_ll, 0) == 0) {
   FUNC_0(VAR_15, VAR_6);
   VAR_15 = ((void*)0);
   FUNC_11(VAR_21);
   VAR_21 = ((void*)0);
   FUNC_5(VAR_20->ifma_ll->ifma_ifp == VAR_10);
  } else {
   VAR_18 = 1;
   VAR_21->ifma_addr = VAR_15;
   VAR_21->ifma_ifp = VAR_10;
   FUNC_2(VAR_21);
   FUNC_9(VAR_10, VAR_21, 0);

   FUNC_1(VAR_21);
   FUNC_4(VAR_21);
   VAR_20->ifma_ll = VAR_21;
  }
 }


 FUNC_5(!VAR_13 || VAR_20->ifma_ll == ((void*)0));

 VAR_20->ifma_addr = VAR_16;
 VAR_20->ifma_ifp = VAR_10;
 FUNC_2(VAR_20);
 FUNC_9(VAR_10, VAR_20, VAR_13);
 FUNC_1(VAR_20);
 if (VAR_12 != ((void*)0)) {
  *VAR_12 = VAR_20;
  FUNC_1(*VAR_12);
 }
 VAR_19 = (VAR_20->ifma_addr->sa_family == VAR_1 ||
     VAR_20->ifma_addr->sa_family == VAR_0);
 FUNC_4(VAR_20);
 FUNC_13(VAR_10);

 FUNC_15(VAR_8, VAR_20);
 FUNC_3(VAR_20);






 if (VAR_19 || VAR_18)
  (void) FUNC_12(VAR_10, 0, VAR_9, ((void*)0));

 if (VAR_10->if_updatemcasts > 0)
  VAR_10->if_updatemcasts = 0;

 return (0);

cleanup:
 if (VAR_20 != ((void*)0))
  FUNC_11(VAR_20);
 if (VAR_16 != ((void*)0))
  FUNC_0(VAR_16, VAR_6);
 if (VAR_21 != ((void*)0))
  FUNC_11(VAR_21);
 if (VAR_15 != ((void*)0))
  FUNC_0(VAR_15, VAR_6);

 return (VAR_17);
}
