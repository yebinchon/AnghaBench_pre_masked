
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct turnstile {int dummy; } ;
struct TYPE_10__ {TYPE_5__* kqwl; TYPE_1__* kq; } ;
typedef TYPE_3__ kqueue_t ;
struct TYPE_9__ {int kqr_state; } ;
struct TYPE_11__ {int kqwl_p; TYPE_2__ kqwl_request; struct turnstile* kqwl_turnstile; } ;
struct TYPE_8__ {int kq_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct turnstile* VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_3__) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (int*,int ) ;
 struct turnstile* FUNC_4 (struct turnstile**,int) ;
 int FUNC_5 (int*,int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 struct turnstile* FUNC_6 () ;
 int FUNC_7 (struct turnstile*) ;
 struct turnstile* FUNC_8 (uintptr_t,struct turnstile**,struct turnstile*,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static struct turnstile *
FUNC_11(kqueue_t VAR_6, bool VAR_7)
{
 uint8_t VAR_8;

 if ((VAR_6.kq->kq_state & VAR_1) == 0) {
  return VAR_2;
 }

 VAR_8 = FUNC_3(&VAR_6.kqwl->kqwl_request.kqr_state, VAR_4);
 if (VAR_8 & VAR_0) {

  return FUNC_4(&VAR_6.kqwl->kqwl_turnstile,
    VAR_8);
 }

 if (!VAR_7) {
  return VAR_2;
 }

 struct turnstile *VAR_9 = FUNC_6(), *VAR_10 = VAR_2;

 FUNC_1(VAR_6);
 if (FUNC_0(VAR_6.kqwl)) {
  FUNC_9(VAR_6.kqwl->kqwl_p);
 }

 if (VAR_6.kqwl->kqwl_request.kqr_state & VAR_0) {
  VAR_10 = VAR_9;
  VAR_9 = VAR_6.kqwl->kqwl_turnstile;
 } else {
  VAR_9 = FUNC_8((uintptr_t)VAR_6.kqwl, &VAR_6.kqwl->kqwl_turnstile,
    VAR_9, VAR_3);


  FUNC_5(&VAR_6.kqwl->kqwl_request.kqr_state,
    VAR_0, VAR_5);
 }

 if (FUNC_0(VAR_6.kqwl)) {
  FUNC_10(VAR_6.kqwl->kqwl_p);
 }
 FUNC_2(VAR_6.kqwl);

 if (VAR_10) {
  FUNC_7(VAR_10);
 }
 return VAR_9;
}
