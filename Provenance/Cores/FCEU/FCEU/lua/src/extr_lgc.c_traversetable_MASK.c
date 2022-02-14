
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int weak; } ;
typedef TYPE_1__ global_State ;
struct TYPE_12__ {int marked; int sizearray; int * array; int gclist; scalar_t__ metatable; } ;
typedef TYPE_2__ Table ;
typedef int TValue ;
typedef int Node ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (TYPE_1__*,scalar_t__,int ) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (TYPE_2__*,int) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int) ;
 int FUNC_6 (TYPE_1__*,scalar_t__) ;
 int FUNC_7 (TYPE_1__*,int *) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_2__*) ;
 int * FUNC_11 (int ,char) ;
 int FUNC_12 (int const*) ;
 scalar_t__ FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int const*) ;
 scalar_t__ FUNC_15 (int *) ;

__attribute__((used)) static int FUNC_16 (global_State *VAR_6, Table *VAR_7) {
  int VAR_8;
  int VAR_9 = 0;
  int VAR_10 = 0;
  const TValue *VAR_11;
  if (VAR_7->metatable)
    FUNC_6(VAR_6, VAR_7->metatable);
  VAR_11 = FUNC_1(VAR_6, VAR_7->metatable, VAR_3);
  if (VAR_11 && FUNC_14(VAR_11)) {
    VAR_9 = (FUNC_11(FUNC_12(VAR_11), 'k') != ((void*)0));
    VAR_10 = (FUNC_11(FUNC_12(VAR_11), 'v') != ((void*)0));
    if (VAR_9 || VAR_10) {
      VAR_7->marked &= ~(VAR_0 | VAR_4);
      VAR_7->marked |= FUNC_0((VAR_9 << VAR_1) |
                             (VAR_10 << VAR_5));
      VAR_7->gclist = VAR_6->weak;
      VAR_6->weak = FUNC_8(VAR_7);
    }
  }
  if (VAR_9 && VAR_10) return 1;
  if (!VAR_10) {
    VAR_8 = VAR_7->sizearray;
    while (VAR_8--)
      FUNC_7(VAR_6, &VAR_7->array[VAR_8]);
  }
  VAR_8 = FUNC_10(VAR_7);
  while (VAR_8--) {
    Node *VAR_12 = FUNC_3(VAR_7, VAR_8);
    FUNC_5(FUNC_15(FUNC_2(VAR_12)) != VAR_2 || FUNC_13(FUNC_4(VAR_12)));
    if (FUNC_13(FUNC_4(VAR_12)))
      FUNC_9(VAR_12);
    else {
      FUNC_5(!FUNC_13(FUNC_2(VAR_12)));
      if (!VAR_9) FUNC_7(VAR_6, FUNC_2(VAR_12));
      if (!VAR_10) FUNC_7(VAR_6, FUNC_4(VAR_12));
    }
  }
  return VAR_9 || VAR_10;
}
