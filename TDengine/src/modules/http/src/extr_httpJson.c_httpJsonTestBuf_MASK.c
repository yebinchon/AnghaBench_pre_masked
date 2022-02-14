
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ lst; scalar_t__ buf; scalar_t__ size; } ;
typedef TYPE_1__ JsonBuf ;


 int FUNC_0 (TYPE_1__*,int) ;

void FUNC_1(JsonBuf* VAR_0, int VAR_1) {
  if ((VAR_0->lst - VAR_0->buf + VAR_1) < VAR_0->size) return;

  FUNC_0(VAR_0, 0);
}
