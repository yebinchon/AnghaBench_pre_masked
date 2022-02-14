
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vfs_context_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_12__ {long const tv_sec; } ;
struct TYPE_11__ {int tv_sec; } ;
struct TYPE_10__ {int tv_sec; } ;
struct TYPE_9__ {long const tv_sec; } ;
struct stat64 {int ss_len; TYPE_4__ st_birthtimespec; TYPE_3__ st_ctimespec; TYPE_2__ st_mtimespec; TYPE_1__ st_atimespec; int ss_family; } ;
struct socket {int so_options; } ;
struct sockaddr_storage {int ss_len; TYPE_4__ st_birthtimespec; TYPE_3__ st_ctimespec; TYPE_2__ st_mtimespec; TYPE_1__ st_atimespec; int ss_family; } ;
struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
struct rtentry {int rt_ifp; } ;
typedef TYPE_5__* proc_t ;
typedef int lookup_default_addr ;
typedef scalar_t__ boolean_t ;
struct TYPE_13__ {int p_textvp; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct sockaddr_in*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct stat64*,int) ;
 char* FUNC_5 (TYPE_5__*) ;
 TYPE_5__* VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_6 () ;
 struct rtentry* FUNC_7 (struct sockaddr*,int ,int ) ;
 int FUNC_8 (struct rtentry*) ;
 int * FUNC_9 (char const*,char) ;
 scalar_t__ FUNC_10 (char const*,char*,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,struct stat64*,int *,int,int ) ;

__attribute__((used)) static boolean_t
FUNC_14 (proc_t VAR_10, struct socket *VAR_11, struct sockaddr_in *VAR_12)
{
 uint64_t VAR_13;
 struct sockaddr_storage VAR_14;
 struct rtentry *VAR_15 = ((void*)0);

 FUNC_2(VAR_10 != ((void*)0));

 if (VAR_7 == VAR_3)
  return VAR_3;

 if (VAR_10 == VAR_8)
  return VAR_3;

 if (VAR_11 && (VAR_11->so_options & VAR_5))
  return VAR_3;

 VAR_13 = FUNC_6();
 if ((VAR_13 - VAR_9) < VAR_2) {
  FUNC_3((VAR_4, "APN fallback notification throttled.\n"));
  return VAR_3;
 }

 if (VAR_12 && FUNC_0(VAR_12))
  return VAR_3;


 FUNC_4(&VAR_14, sizeof(VAR_14));
 VAR_14.ss_family = VAR_1;
 VAR_14.ss_len = sizeof(struct sockaddr_in6);

 VAR_15 = FUNC_7((struct sockaddr *)&VAR_14, 0, 0);
 if (((void*)0) == VAR_15) {
  FUNC_3((VAR_4, "APN fallback notification could not find "
      "unscoped default IPv6 route.\n"));
  return VAR_3;
 }

 if (!FUNC_1(VAR_15->rt_ifp)) {
  FUNC_8(VAR_15);
  FUNC_3((VAR_4, "APN fallback notification could not find "
      "unscoped default IPv6 route through cellular interface.\n"));
  return VAR_3;
 }






 FUNC_8(VAR_15);
 VAR_15 = ((void*)0);

 FUNC_4(&VAR_14, sizeof(VAR_14));
 VAR_14.ss_family = VAR_0;
 VAR_14.ss_len = sizeof(struct sockaddr_in);

 VAR_15 = FUNC_7((struct sockaddr *)&VAR_14, 0, 0);

 if (VAR_15) {
  FUNC_8(VAR_15);
  VAR_15 = ((void*)0);
  FUNC_3((VAR_4, "APN fallback notification found unscoped "
      "IPv4 default route!\n"));
  return VAR_3;
 }

 {





  const char *VAR_16 = FUNC_5(VAR_10);
  if (VAR_16 == ((void*)0) ||
      VAR_16[0] == '\0' ||
      FUNC_9(VAR_16, '.') == ((void*)0) ||
      FUNC_10(VAR_16, "com.apple.", sizeof("com.apple.") - 1) == 0) {
   FUNC_3((VAR_4, "Abort: APN fallback notification found first-"
       "party bundle ID \"%s\"!\n", (VAR_16 ? VAR_16 : "NULL")));
   return VAR_3;
  }
 }

 {






  static const long VAR_17 = 1464764400L;
  vfs_context_t VAR_18;
  struct stat64 VAR_19;
  int VAR_20;

  FUNC_4(&VAR_19, sizeof(struct stat64));
  VAR_18 = FUNC_11(((void*)0));
  VAR_20 = FUNC_13(VAR_10->p_textvp, &VAR_19, ((void*)0), 1, VAR_18);
  (void)FUNC_12(VAR_18);

  if (VAR_20 != 0 ||
      VAR_19.st_atimespec.tv_sec >= VAR_17 ||
      VAR_19.st_birthtimespec.tv_sec >= VAR_17) {
   FUNC_3((VAR_4, "Abort: APN fallback notification found binary "
       "too recent! (err %d atime %ld mtime %ld ctime %ld birthtime %ld)\n",
       VAR_20, VAR_19.st_atimespec.tv_sec, VAR_19.st_mtimespec.tv_sec,
       VAR_19.st_ctimespec.tv_sec, VAR_19.st_birthtimespec.tv_sec));
   return VAR_3;
  }
 }
 return VAR_6;
}
