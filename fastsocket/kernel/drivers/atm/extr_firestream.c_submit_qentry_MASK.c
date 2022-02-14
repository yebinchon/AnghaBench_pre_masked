
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct queue {int offset; } ;
struct fs_dev {int dummy; } ;
struct FS_QENTRY {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct FS_QENTRY* FUNC_2 (int) ;
 int FUNC_3 (int ,char*,int ,...) ;
 int FUNC_4 (struct fs_dev*,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (struct fs_dev*,int ,int ) ;

__attribute__((used)) static void FUNC_7 (struct fs_dev *VAR_3, struct queue *VAR_4, struct FS_QENTRY *VAR_5)
{
 u32 VAR_6;
 struct FS_QENTRY *VAR_7;




 while ((VAR_6 = FUNC_4 (VAR_3, FUNC_1 (VAR_4->offset))) & VAR_1) {
  FUNC_3 (VAR_0, "Found queue at %x full. Waiting.\n",
       VAR_4->offset);
  FUNC_5 ();
 }

 VAR_6 &= ~0xf;
 VAR_7 = FUNC_2 (VAR_6);
 if (VAR_5 != VAR_7) {
  FUNC_3 (VAR_0, "q mismatch! %p %p\n", VAR_5, VAR_7);
 }

 FUNC_6 (VAR_3, FUNC_1(VAR_4->offset), VAR_2);

 {
  static int VAR_8;
  if (!(VAR_8++ % 100))
   {
    int VAR_9, VAR_10;
    VAR_9 = FUNC_4 (VAR_3, FUNC_0(VAR_4->offset));
    VAR_10 = FUNC_4 (VAR_3, FUNC_1(VAR_4->offset));
    FUNC_3 (VAR_0, "q at %d: %x-%x: %x entries.\n",
         VAR_4->offset, VAR_9, VAR_10, VAR_10-VAR_9);
   }
 }
}
