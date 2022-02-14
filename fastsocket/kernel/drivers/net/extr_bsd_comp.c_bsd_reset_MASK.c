
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bsd_db {scalar_t__ clear_count; scalar_t__ seqno; } ;


 int FUNC_0 (struct bsd_db*) ;

__attribute__((used)) static void FUNC_1 (void *VAR_0)
  {
    struct bsd_db *VAR_1 = (struct bsd_db *) VAR_0;

    FUNC_0(VAR_1);

    VAR_1->seqno = 0;
    VAR_1->clear_count = 0;
  }
