
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int var ;
struct List {int nitems; int tail; int head; } ;
typedef int int64_t ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (struct List*,int ) ;
 int * FUNC_2 (struct List*,int ) ;
 int FUNC_3 (int ,char*,int ,int ) ;

__attribute__((used)) static var FUNC_4(struct List* VAR_2, int64_t VAR_3) {

  VAR_3 = VAR_3 < 0 ? VAR_2->nitems+VAR_3 : VAR_3;
  var VAR_4;

  if (VAR_3 <= (int64_t)(VAR_2->nitems / 2)) {
    VAR_4 = VAR_2->head;
    while (VAR_3) { VAR_4 = *FUNC_1(VAR_2, VAR_4); VAR_3--; }
  } else {
    VAR_3 = VAR_2->nitems-VAR_3-1;
    VAR_4 = VAR_2->tail;
    while (VAR_3) { VAR_4 = *FUNC_2(VAR_2, VAR_4); VAR_3--; }
  }

  return VAR_4;
}
