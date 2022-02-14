
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct Exception* var ;
struct Exception {int buffers; int active; int depth; int msg; int obj; } ;
typedef int jmp_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 struct Exception* FUNC_1 (struct Exception*,int ) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void FUNC_3(var VAR_2, var VAR_3) {
  struct Exception* VAR_4 = VAR_2;
  struct Exception* VAR_5 = FUNC_1(VAR_3, VAR_1);
  VAR_4->obj = VAR_5->obj;
  FUNC_0(VAR_4->msg, VAR_5->msg);
  VAR_4->depth = VAR_5->depth;
  VAR_4->active = VAR_5->active;
  FUNC_2(VAR_4->buffers, VAR_5->buffers, sizeof(jmp_buf*) * VAR_0);
}
