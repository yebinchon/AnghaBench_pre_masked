
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct timeval {long tv_sec; } ;
struct cred {long uid; long gid; } ;
struct core_name {int size; int corename; scalar_t__ used; } ;
struct TYPE_5__ {long comm; } ;
struct TYPE_4__ {long nodename; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 int FUNC_1 (struct core_name*) ;
 int FUNC_2 (struct core_name*,char*,long) ;
 char* VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_2__* VAR_7 ;
 struct cred* FUNC_3 () ;
 int FUNC_4 (struct timeval*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int,int ) ;
 long FUNC_7 (int ) ;
 long FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int *) ;
 int VAR_8 ;
 TYPE_1__* FUNC_10 () ;

__attribute__((used)) static int FUNC_11(struct core_name *VAR_9, long VAR_10)
{
 const struct cred *VAR_11 = FUNC_3();
 const char *VAR_12 = VAR_5;
 int VAR_13 = (*VAR_12 == '|');
 int VAR_14 = 0;

 int VAR_15 = 0;

 VAR_9->size = VAR_0 * FUNC_0(&VAR_4);
 VAR_9->corename = FUNC_6(VAR_9->size, VAR_2);
 VAR_9->used = 0;

 if (!VAR_9->corename)
  return -VAR_1;



 while (*VAR_12) {
  if (*VAR_12 != '%') {
   if (*VAR_12 == 0)
    goto out;
   VAR_15 = FUNC_2(VAR_9, "%c", *VAR_12++);
  } else {
   switch (*++VAR_12) {

   case 0:
    goto out;

   case '%':
    VAR_15 = FUNC_2(VAR_9, "%c", '%');
    break;

   case 'p':
    VAR_14 = 1;
    VAR_15 = FUNC_2(VAR_9, "%d",
           FUNC_8(VAR_7));
    break;

   case 'u':
    VAR_15 = FUNC_2(VAR_9, "%d", VAR_11->uid);
    break;

   case 'g':
    VAR_15 = FUNC_2(VAR_9, "%d", VAR_11->gid);
    break;

   case 's':
    VAR_15 = FUNC_2(VAR_9, "%ld", VAR_10);
    break;

   case 't': {
    struct timeval VAR_16;
    FUNC_4(&VAR_16);
    VAR_15 = FUNC_2(VAR_9, "%lu", VAR_16.tv_sec);
    break;
   }

   case 'h':
    FUNC_5(&VAR_8);
    VAR_15 = FUNC_2(VAR_9, "%s",
           FUNC_10()->nodename);
    FUNC_9(&VAR_8);
    break;

   case 'e':
    VAR_15 = FUNC_2(VAR_9, "%s", VAR_7->comm);
    break;
   case 'E':
    VAR_15 = FUNC_1(VAR_9);
    break;

   case 'c':
    VAR_15 = FUNC_2(VAR_9, "%lu",
           FUNC_7(VAR_3));
    break;
   default:
    break;
   }
   ++VAR_12;
  }

  if (VAR_15)
   return VAR_15;
 }





 if (!VAR_13 && !VAR_14 && VAR_6) {
  VAR_15 = FUNC_2(VAR_9, ".%d", FUNC_8(VAR_7));
  if (VAR_15)
   return VAR_15;
 }
out:
 return VAR_13;
}
