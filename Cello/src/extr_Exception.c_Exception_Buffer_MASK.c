
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Exception {int depth; int ** buffers; } ;
typedef int jmp_buf ;


 int FUNC_0 () ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;

__attribute__((used)) static jmp_buf* FUNC_2(struct Exception* VAR_1) {
  if (VAR_1->depth == 0) {
    FUNC_1(VAR_0, "Cello Fatal Error: Exception Buffer Out of Bounds!\n");
    FUNC_0();
  }
  return VAR_1->buffers[VAR_1->depth-1];
}
