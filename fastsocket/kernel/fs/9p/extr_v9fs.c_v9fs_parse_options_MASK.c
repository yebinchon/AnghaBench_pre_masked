
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int substring_t ;
struct v9fs_session_info {int afid; int debug; int dfltuid; int dfltgid; int nodev; int uid; int flags; void* cache; int * cachetag; int aname; int uname; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*,int ) ;
 int FUNC_3 (int *,int*) ;
 void* FUNC_4 (int *) ;
 int FUNC_5 (int ,int *,int ) ;
 int FUNC_6 (char*,int ,int *) ;
 int VAR_12 ;
 int FUNC_7 (char*,char**,int) ;
 int FUNC_8 (char*,char*) ;
 char* FUNC_9 (char**,char*) ;
 int VAR_13 ;

__attribute__((used)) static int FUNC_10(struct v9fs_session_info *VAR_14, char *VAR_15)
{
 char *VAR_16;
 substring_t VAR_17[VAR_5];
 char *VAR_18;
 int VAR_19 = 0;
 char *VAR_20, *VAR_21;
 int VAR_22 = 0;


 VAR_14->afid = ~0;
 VAR_14->debug = 0;
 VAR_14->cache = 0;




 if (!VAR_15)
  return 0;

 VAR_16 = FUNC_2(VAR_15, VAR_4);
 if (!VAR_16)
  goto fail_option_alloc;

 while ((VAR_18 = FUNC_9(&VAR_16, ",")) != ((void*)0)) {
  int VAR_23;
  if (!*VAR_18)
   continue;
  VAR_23 = FUNC_6(VAR_18, VAR_13, VAR_17);
  if (VAR_23 < 128) {
   int VAR_24 = FUNC_3(&VAR_17[0], &VAR_19);
   if (VAR_24 < 0) {
    FUNC_0(VAR_6,
     "integer field, but no integer?\n");
    VAR_22 = VAR_24;
    continue;
   }
  }
  switch (VAR_23) {
  case 134:
   VAR_14->debug = VAR_19;



   break;

  case 132:
   VAR_14->dfltuid = VAR_19;
   break;
  case 133:
   VAR_14->dfltgid = VAR_19;
   break;
  case 138:
   VAR_14->afid = VAR_19;
   break;
  case 128:
   FUNC_5(VAR_14->uname, &VAR_17[0], VAR_7);
   break;
  case 129:
   FUNC_5(VAR_14->aname, &VAR_17[0], VAR_7);
   break;
  case 130:
   VAR_14->nodev = 1;
   break;
  case 136:
   VAR_14->cache = VAR_1;
   break;
  case 131:
   VAR_14->cache = VAR_0;
   break;
  case 135:



   break;
  case 137:
   VAR_20 = FUNC_4(&VAR_17[0]);
   if (!VAR_20)
    goto fail_option_alloc;

   if (FUNC_8(VAR_20, "loose") == 0)
    VAR_14->cache = VAR_1;
   else if (FUNC_8(VAR_20, "fscache") == 0)
    VAR_14->cache = VAR_0;
   else
    VAR_14->cache = VAR_2;
   FUNC_1(VAR_20);
   break;

  case 139:
   VAR_20 = FUNC_4(&VAR_17[0]);
   if (!VAR_20)
    goto fail_option_alloc;

   VAR_14->flags &= ~VAR_9;
   if (FUNC_8(VAR_20, "user") == 0)
    VAR_14->flags |= VAR_11;
   else if (FUNC_8(VAR_20, "any") == 0)
    VAR_14->flags |= VAR_8;
   else {
    VAR_14->flags |= VAR_10;
    VAR_14->uid = FUNC_7(VAR_20, &VAR_21, 10);
    if (*VAR_21 != '\0')
     VAR_14->uid = ~0;
   }
   FUNC_1(VAR_20);
   break;

  default:
   continue;
  }
 }
 FUNC_1(VAR_16);
 return VAR_22;

fail_option_alloc:
 FUNC_0(VAR_6,
     "failed to allocate copy of option argument\n");
 return -VAR_3;
}
