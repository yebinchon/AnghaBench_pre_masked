
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_device {int buf_mutex; int peb_size; int peb_buf1; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int,int ) ;
 int FUNC_2 (struct ubi_device*,int) ;
 int FUNC_3 (int ,int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int* VAR_3 ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*,int,...) ;
 int FUNC_8 (struct ubi_device*,int ,int,int ,int ) ;
 int FUNC_9 (struct ubi_device*,int ,int,int ,int ) ;
 int FUNC_10 (char*,int) ;

__attribute__((used)) static int FUNC_11(struct ubi_device *VAR_4, int VAR_5)
{
 int VAR_6, VAR_7, VAR_8;

 FUNC_10("run torture test for PEB %d", VAR_5);
 VAR_8 = FUNC_0(VAR_3);
 FUNC_6(VAR_8 > 0);

 FUNC_4(&VAR_4->buf_mutex);
 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  VAR_6 = FUNC_2(VAR_4, VAR_5);
  if (VAR_6)
   goto out;


  VAR_6 = FUNC_8(VAR_4, VAR_4->peb_buf1, VAR_5, 0, VAR_4->peb_size);
  if (VAR_6)
   goto out;

  VAR_6 = FUNC_1(VAR_4->peb_buf1, 0xFF, VAR_4->peb_size);
  if (VAR_6 == 0) {
   FUNC_7("erased PEB %d, but a non-0xFF byte found",
    VAR_5);
   VAR_6 = -VAR_1;
   goto out;
  }


  FUNC_3(VAR_4->peb_buf1, VAR_3[VAR_7], VAR_4->peb_size);
  VAR_6 = FUNC_9(VAR_4, VAR_4->peb_buf1, VAR_5, 0, VAR_4->peb_size);
  if (VAR_6)
   goto out;

  FUNC_3(VAR_4->peb_buf1, ~VAR_3[VAR_7], VAR_4->peb_size);
  VAR_6 = FUNC_8(VAR_4, VAR_4->peb_buf1, VAR_5, 0, VAR_4->peb_size);
  if (VAR_6)
   goto out;

  VAR_6 = FUNC_1(VAR_4->peb_buf1, VAR_3[VAR_7], VAR_4->peb_size);
  if (VAR_6 == 0) {
   FUNC_7("pattern %x checking failed for PEB %d",
    VAR_3[VAR_7], VAR_5);
   VAR_6 = -VAR_1;
   goto out;
  }
 }

 VAR_6 = VAR_8;
 FUNC_10("PEB %d passed torture test, do not mark it a bad", VAR_5);

out:
 FUNC_5(&VAR_4->buf_mutex);
 if (VAR_6 == VAR_2 || VAR_6 == -VAR_0) {





  FUNC_7("read problems on freshly erased PEB %d, must be bad",
   VAR_5);
  VAR_6 = -VAR_1;
 }
 return VAR_6;
}
