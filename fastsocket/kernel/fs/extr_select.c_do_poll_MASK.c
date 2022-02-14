
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int tv_nsec; int tv_sec; } ;
struct pollfd {int dummy; } ;
struct poll_wqueues {int error; int pt; } ;
struct poll_list {int len; struct pollfd* entries; struct poll_list* next; } ;
typedef int poll_table ;
typedef int ktime_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct pollfd*,int *) ;
 int FUNC_1 (struct poll_wqueues*,int ,int *,unsigned long) ;
 unsigned long FUNC_2 (struct timespec*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct timespec) ;

__attribute__((used)) static int FUNC_5(unsigned int VAR_3, struct poll_list *VAR_4,
     struct poll_wqueues *VAR_5, struct timespec *VAR_6)
{
 poll_table* VAR_7 = &VAR_5->pt;
 ktime_t VAR_8, *VAR_9 = ((void*)0);
 int VAR_10 = 0, VAR_11 = 0;
 unsigned long VAR_12 = 0;


 if (VAR_6 && !VAR_6->tv_sec && !VAR_6->tv_nsec) {
  VAR_7 = ((void*)0);
  VAR_10 = 1;
 }

 if (VAR_6 && !VAR_10)
  VAR_12 = FUNC_2(VAR_6);

 for (;;) {
  struct poll_list *VAR_13;

  for (VAR_13 = VAR_4; VAR_13 != ((void*)0); VAR_13 = VAR_13->next) {
   struct pollfd * VAR_14, * VAR_15;

   VAR_14 = VAR_13->entries;
   VAR_15 = VAR_14 + VAR_13->len;
   for (; VAR_14 != VAR_15; VAR_14++) {







    if (FUNC_0(VAR_14, VAR_7)) {
     VAR_11++;
     VAR_7 = ((void*)0);
    }
   }
  }




  VAR_7 = ((void*)0);
  if (!VAR_11) {
   VAR_11 = VAR_5->error;
   if (FUNC_3(VAR_2))
    VAR_11 = -VAR_0;
  }
  if (VAR_11 || VAR_10)
   break;






  if (VAR_6 && !VAR_9) {
   VAR_8 = FUNC_4(*VAR_6);
   VAR_9 = &VAR_8;
  }

  if (!FUNC_1(VAR_5, VAR_1, VAR_9, VAR_12))
   VAR_10 = 1;
 }
 return VAR_11;
}
