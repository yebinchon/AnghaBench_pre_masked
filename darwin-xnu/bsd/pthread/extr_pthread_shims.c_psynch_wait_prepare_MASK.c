
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wait_result_t ;
typedef int uint64_t ;
typedef int thread_t ;
struct turnstile {int ts_waitq; } ;
typedef int event_t ;
typedef int event64_t ;
typedef int block_hint_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ,int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 struct turnstile* FUNC_3 (uintptr_t,struct turnstile**,int ,int ) ;
 int FUNC_4 (struct turnstile*,int ,int) ;
 int FUNC_5 (int *,int ,int ,int ,int ,int ) ;

__attribute__((used)) static wait_result_t
FUNC_6(uintptr_t VAR_6, struct turnstile **VAR_7,
  thread_t VAR_8, block_hint_t VAR_9, uint64_t VAR_10)
{
 struct turnstile *VAR_11;
 wait_result_t VAR_12;

 if (VAR_7) {
  VAR_11 = FUNC_3(VAR_6, VAR_7, VAR_4,
    VAR_5);

  FUNC_4(VAR_11, VAR_8,
    (VAR_2 | VAR_3));

  FUNC_2(FUNC_1(), VAR_9);

  VAR_12 = FUNC_5(&VAR_11->ts_waitq, (event64_t)VAR_6,
    VAR_0, VAR_1, VAR_10, 0);
 } else {
  FUNC_2(FUNC_1(), VAR_9);

  VAR_12 = FUNC_0((event_t)VAR_6, VAR_0,
    VAR_1, VAR_10, 0);
 }

 return VAR_12;
}
