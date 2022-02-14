
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {struct eerbuffer* private_data; } ;
struct eerbuffer {int buffer_page_count; int buffersize; int list; struct eerbuffer* buffer; } ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (struct eerbuffer*,int) ;
 int VAR_8 ;
 int FUNC_2 (struct eerbuffer*) ;
 struct eerbuffer* FUNC_3 (int,int ) ;
 struct eerbuffer* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 () ;
 int FUNC_7 (struct inode*,struct file*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 () ;

__attribute__((used)) static int FUNC_11(struct inode *VAR_9, struct file *VAR_10)
{
 struct eerbuffer *VAR_11;
 unsigned long VAR_12;

 VAR_11 = FUNC_4(sizeof(struct eerbuffer), VAR_3);
 if (!VAR_11)
  return -VAR_2;
 FUNC_6();
 VAR_11->buffer_page_count = VAR_8;
 if (VAR_11->buffer_page_count < 1 ||
     VAR_11->buffer_page_count > VAR_4 / VAR_5) {
  FUNC_2(VAR_11);
  FUNC_0(VAR_0, "can't open device since module "
   "parameter eer_pages is smaller than 1 or"
   " bigger than %d", (int)(VAR_4 / VAR_5));
  FUNC_10();
  return -VAR_1;
 }
 VAR_11->buffersize = VAR_11->buffer_page_count * VAR_5;
 VAR_11->buffer = FUNC_3(VAR_11->buffer_page_count * sizeof(char *),
          VAR_3);
        if (!VAR_11->buffer) {
  FUNC_2(VAR_11);
  FUNC_10();
                return -VAR_2;
 }
 if (FUNC_1(VAR_11->buffer,
        VAR_11->buffer_page_count)) {
  FUNC_2(VAR_11->buffer);
  FUNC_2(VAR_11);
  FUNC_10();
  return -VAR_2;
 }
 VAR_10->private_data = VAR_11;
 FUNC_8(&VAR_7, VAR_12);
 FUNC_5(&VAR_11->list, &VAR_6);
 FUNC_9(&VAR_7, VAR_12);

 FUNC_10();
 return FUNC_7(VAR_9,VAR_10);
}
