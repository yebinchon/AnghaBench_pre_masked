
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {TYPE_4__* ts; } ;
struct TYPE_10__ {scalar_t__ token; TYPE_1__ seminfo; } ;
struct TYPE_13__ {TYPE_2__ t; } ;
struct TYPE_11__ {int len; } ;
struct TYPE_12__ {TYPE_3__ tsv; } ;
typedef TYPE_4__ TString ;
typedef TYPE_5__ LexState ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_5__*,int ,int ) ;

__attribute__((used)) static void FUNC_2 (LexState *VAR_2) {
  if (VAR_2->t.token == VAR_0 || VAR_2->t.token == VAR_1) {
    TString *VAR_3 = VAR_2->t.seminfo.ts;
    FUNC_1(VAR_2, FUNC_0(VAR_3), VAR_3->tsv.len);
  }
}
