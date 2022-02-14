
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {scalar_t__ count; scalar_t__ from; int size; void* buf; TYPE_1__* op; scalar_t__ index; scalar_t__ version; } ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {int (* show ) (struct seq_file*,void*) ;int (* stop ) (struct seq_file*,void*) ;void* (* next ) (struct seq_file*,void*,scalar_t__*) ;void* (* start ) (struct seq_file*,scalar_t__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (void*) ;
 int VAR_3 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (int,int ) ;
 void* FUNC_4 (struct seq_file*,scalar_t__*) ;
 int FUNC_5 (struct seq_file*,void*) ;
 void* FUNC_6 (struct seq_file*,void*,scalar_t__*) ;
 int FUNC_7 (struct seq_file*,void*) ;
 int FUNC_8 (struct seq_file*,void*) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct seq_file *VAR_4, loff_t VAR_5)
{
 loff_t VAR_6 = 0, VAR_7;
 int VAR_8 = 0;
 void *VAR_9;

 VAR_4->version = 0;
 VAR_7 = 0;
 VAR_4->count = VAR_4->from = 0;
 if (!VAR_5) {
  VAR_4->index = VAR_7;
  return 0;
 }
 if (!VAR_4->buf) {
  VAR_4->buf = FUNC_3(VAR_4->size = VAR_3, VAR_2);
  if (!VAR_4->buf)
   return -VAR_1;
 }
 VAR_9 = VAR_4->op->start(VAR_4, &VAR_7);
 while (VAR_9) {
  VAR_8 = FUNC_1(VAR_9);
  if (FUNC_0(VAR_9))
   break;
  VAR_8 = VAR_4->op->show(VAR_4, VAR_9);
  if (VAR_8 < 0)
   break;
  if (FUNC_9(VAR_8)) {
   VAR_8 = 0;
   VAR_4->count = 0;
  }
  if (VAR_4->count == VAR_4->size)
   goto Eoverflow;
  if (VAR_6 + VAR_4->count > VAR_5) {
   VAR_4->from = VAR_5 - VAR_6;
   VAR_4->count -= VAR_4->from;
   VAR_4->index = VAR_7;
   break;
  }
  VAR_6 += VAR_4->count;
  VAR_4->count = 0;
  if (VAR_6 == VAR_5) {
   VAR_7++;
   VAR_4->index = VAR_7;
   break;
  }
  VAR_9 = VAR_4->op->next(VAR_4, VAR_9, &VAR_7);
 }
 VAR_4->op->stop(VAR_4, VAR_9);
 VAR_4->index = VAR_7;
 return VAR_8;

Eoverflow:
 VAR_4->op->stop(VAR_4, VAR_9);
 FUNC_2(VAR_4->buf);
 VAR_4->buf = FUNC_3(VAR_4->size <<= 1, VAR_2);
 return !VAR_4->buf ? -VAR_1 : -VAR_0;
}
