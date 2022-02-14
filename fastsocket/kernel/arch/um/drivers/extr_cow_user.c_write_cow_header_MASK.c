
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cow_header_v3 {char* backing_file; int cow_format; void* alignment; void* sectorsize; int size; void* mtime; void* version; void* magic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (char*,int,char*) ;
 int FUNC_1 (char*,unsigned long long*) ;
 int FUNC_2 (struct cow_header_v3*) ;
 struct cow_header_v3* FUNC_3 (int) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int,struct cow_header_v3*,int) ;
 void* FUNC_7 (int) ;
 int FUNC_8 (unsigned long long) ;
 int FUNC_9 (char*,unsigned long*) ;
 int FUNC_10 (char*) ;

int FUNC_11(char *VAR_5, int VAR_6, char *VAR_7,
       int VAR_8, int VAR_9, unsigned long long *VAR_10)
{
 struct cow_header_v3 *VAR_11;
 unsigned long VAR_12;
 int VAR_13;

 VAR_13 = FUNC_5(VAR_6, 0);
 if (VAR_13 < 0) {
  FUNC_4("write_cow_header - lseek failed, err = %d\n", -VAR_13);
  goto out;
 }

 VAR_13 = -VAR_4;
 VAR_11 = FUNC_3(sizeof(*VAR_11));
 if (VAR_11 == ((void*)0)) {
  FUNC_4("write_cow_header - failed to allocate COW V3 "
      "header\n");
  goto out;
 }
 VAR_11->magic = FUNC_7(VAR_1);
 VAR_11->version = FUNC_7(VAR_2);

 VAR_13 = -VAR_3;
 if (FUNC_10(VAR_7) > sizeof(VAR_11->backing_file) - 1) {

  FUNC_4("Backing file name \"%s\" is too long - names are "
      "limited to %zd characters\n", VAR_7,
      sizeof(VAR_11->backing_file) - 1);
  goto out_free;
 }

 if (FUNC_0(VAR_11->backing_file, sizeof(VAR_11->backing_file),
        VAR_7))
  goto out_free;

 VAR_13 = FUNC_9(VAR_11->backing_file, &VAR_12);
 if (VAR_13 < 0) {
  FUNC_4("write_cow_header - backing file '%s' mtime "
      "request failed, err = %d\n", VAR_11->backing_file,
      -VAR_13);
  goto out_free;
 }

 VAR_13 = FUNC_1(VAR_11->backing_file, VAR_10);
 if (VAR_13 < 0) {
  FUNC_4("write_cow_header - couldn't get size of "
      "backing file '%s', err = %d\n",
      VAR_11->backing_file, -VAR_13);
  goto out_free;
 }

 VAR_11->mtime = FUNC_7(VAR_12);
 VAR_11->size = FUNC_8(*VAR_10);
 VAR_11->sectorsize = FUNC_7(VAR_8);
 VAR_11->alignment = FUNC_7(VAR_9);
 VAR_11->cow_format = VAR_0;

 VAR_13 = FUNC_6(VAR_6, VAR_11, sizeof(*VAR_11));
 if (VAR_13 != sizeof(*VAR_11)) {
  FUNC_4("write_cow_header - write of header to "
      "new COW file '%s' failed, err = %d\n", VAR_5,
      -VAR_13);
  goto out_free;
 }
 VAR_13 = 0;
 out_free:
 FUNC_2(VAR_11);
 out:
 return VAR_13;
}
