
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int sa_family_t ;
struct TYPE_6__ {int ifr_flags; } ;
struct TYPE_4__ {int sa_family; scalar_t__ sa_data; } ;
struct TYPE_5__ {TYPE_1__ ifr_hwaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int,char**,char*,int ,int ) ;
 char* VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (char*) ;
 int VAR_7 ;
 TYPE_3__ VAR_8 ;
 TYPE_2__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*,char*) ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 scalar_t__ FUNC_12 (int ,int ,int ) ;
 int VAR_22 ;
 char* FUNC_13 (int) ;
 char* VAR_23 ;
 int FUNC_14 (char*,char*,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,int) ;
 char* VAR_24 ;

int FUNC_15(int VAR_25, char *VAR_26[])
{
 char **VAR_27, *VAR_28, *VAR_29;
 int VAR_30, VAR_31, VAR_32;
 int VAR_33 = 0;
 int VAR_34 = 0;

 while ((VAR_30 = FUNC_7(VAR_25, VAR_26, "acdfhuvV", VAR_7, 0)) != VAR_1) {
  switch (VAR_30) {
  case 'a': VAR_12++; VAR_34++; break;
  case 'c': VAR_13++; VAR_34++; break;
  case 'd': VAR_14++; VAR_34++; break;
  case 'f': VAR_15++; VAR_34++; break;
  case 'h': VAR_16++; VAR_34++; break;
  case 'u': VAR_17++; VAR_34++; break;
  case 'v': VAR_18++; break;
  case 'V': VAR_11++; VAR_34++; break;

  case '?':
   FUNC_3(VAR_22, "%s", VAR_23);
   VAR_33 = 2;
   goto out;
  }
 }


 if (VAR_34 > 1) {
  FUNC_3(VAR_22, "%s", VAR_23);
  VAR_33 = 2;
  goto out;
 }

 if (VAR_18 || VAR_11) {
  FUNC_10(VAR_24);
  if (VAR_11) {
   VAR_33 = 0;
   goto out;
  }
 }

 if (VAR_17) {
  FUNC_10(VAR_23);
  VAR_33 = 0;
  goto out;
 }

 if (VAR_16) {
  FUNC_10(VAR_23);
  FUNC_10(VAR_5);
  VAR_33 = 0;
  goto out;
 }


 if ((VAR_20 = FUNC_12(VAR_0, VAR_4, 0)) < 0) {
  FUNC_9("socket");
  VAR_33 = 1;
  goto out;
 }

 if (VAR_12) {
  if (VAR_19 == VAR_25) {


   FUNC_8((char *)((void*)0));
   goto out;
  } else {

   FUNC_3(VAR_22, "%s", VAR_23);
   VAR_33 = 2;
   goto out;
  }
 }


 VAR_27 = VAR_26 + VAR_19;
 VAR_28 = *VAR_27++;

 if (VAR_28 == ((void*)0)) {
  FUNC_3(VAR_22, "%s", VAR_23);
  VAR_33 = 2;
  goto out;
 }


 VAR_33 = FUNC_4(VAR_28);
 if (VAR_33) {
  FUNC_3(VAR_22,
   "Master '%s': Error: handshake with driver failed. "
   "Aborting\n",
   VAR_28);
  goto out;
 }

 VAR_29 = *VAR_27++;

 if (VAR_29 == ((void*)0)) {
  if (VAR_14 || VAR_13) {
   FUNC_3(VAR_22, "%s", VAR_23);
   VAR_33 = 2;
   goto out;
  }




  FUNC_8(VAR_28);
  goto out;
 }

 VAR_33 = FUNC_5(VAR_28, VAR_10);
 if (VAR_33) {

  FUNC_3(VAR_22,
   "Master '%s': Error: get settings failed: %s. "
   "Aborting\n",
   VAR_28, FUNC_13(VAR_33));
  goto out;
 }




 if (!(VAR_8.ifr_flags & VAR_2)) {
  FUNC_3(VAR_22,
   "Illegal operation; the specified interface '%s' "
   "is not a master. Aborting\n",
   VAR_28);
  VAR_33 = 1;
  goto out;
 }


 if (!(VAR_8.ifr_flags & VAR_3)) {
  FUNC_3(VAR_22,
   "Illegal operation; the specified master interface "
   "'%s' is not up.\n",
   VAR_28);
  VAR_33 = 1;
  goto out;
 }


 if (!VAR_13 && !VAR_14) {
  sa_family_t VAR_35 = VAR_9.ifr_hwaddr.sa_family;
  unsigned char *VAR_36 =
   (unsigned char *)VAR_9.ifr_hwaddr.sa_data;


  if (VAR_35 != 1 && !VAR_15) {
   FUNC_3(VAR_22,
    "Illegal operation: The specified master "
    "interface '%s' is not ethernet-like.\n "
    "This program is designed to work with "
    "ethernet-like network interfaces.\n "
    "Use the '-f' option to force the "
    "operation.\n",
    VAR_28);
   VAR_33 = 1;
   goto out;
  }


  for (VAR_31 = 0; VAR_31 < 6; VAR_31++) {
   if (VAR_36[VAR_31] != 0) {
    VAR_6 = 1;
    break;
   }
  }

  if (VAR_6) {
   FUNC_14("current hardware address of master '%s' "
    "is %2.2x:%2.2x:%2.2x:%2.2x:%2.2x:%2.2x, "
    "type %d\n",
    VAR_28,
    VAR_36[0], VAR_36[1],
    VAR_36[2], VAR_36[3],
    VAR_36[4], VAR_36[5],
    VAR_35);
  }
 }


 if (VAR_13) {

  VAR_33 = FUNC_6(VAR_29);
  if (VAR_33) {
   FUNC_3(VAR_22,
    "Slave '%s': Error: get flags failed. "
    "Aborting\n",
    VAR_29);
   goto out;
  }
  VAR_33 = FUNC_0(VAR_28, VAR_29);
  if (VAR_33) {
   FUNC_3(VAR_22,
    "Master '%s', Slave '%s': Error: "
    "Change active failed\n",
    VAR_28, VAR_29);
  }
 } else {

  do {
   if (VAR_14) {

    VAR_32 = FUNC_6(VAR_29);
    if (VAR_32) {


     FUNC_3(VAR_22,
      "Slave '%s': Error: get flags "
      "failed. Skipping\n",
      VAR_29);
     VAR_33 = VAR_32;
     continue;
    }
    VAR_32 = FUNC_11(VAR_28, VAR_29);
    if (VAR_32) {
     FUNC_3(VAR_22,
      "Master '%s', Slave '%s': Error: "
      "Release failed\n",
      VAR_28, VAR_29);
     VAR_33 = VAR_32;
    }
   } else {

    VAR_32 = FUNC_5(VAR_29, VAR_21);
    if (VAR_32) {


     FUNC_3(VAR_22,
      "Slave '%s': Error: get "
      "settings failed: %s. "
      "Skipping\n",
      VAR_29, FUNC_13(VAR_32));
     VAR_33 = VAR_32;
     continue;
    }
    VAR_32 = FUNC_2(VAR_28, VAR_29);
    if (VAR_32) {
     FUNC_3(VAR_22,
      "Master '%s', Slave '%s': Error: "
      "Enslave failed\n",
      VAR_28, VAR_29);
     VAR_33 = VAR_32;
    }
   }
  } while ((VAR_29 = *VAR_27++) != ((void*)0));
 }

out:
 if (VAR_20 >= 0) {
  FUNC_1(VAR_20);
 }

 return VAR_33;
}
