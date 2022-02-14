
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct FtpFile {scalar_t__ stream; int filename; } ;


 scalar_t__ FUNC_0 (int ,char*) ;
 size_t FUNC_1 (void*,size_t,size_t,scalar_t__) ;

__attribute__((used)) static size_t FUNC_2(void *VAR_0, size_t VAR_1, size_t VAR_2, void *VAR_3)
{
  struct FtpFile *VAR_4 = (struct FtpFile *)VAR_3;
  if(!VAR_4->stream) {

    VAR_4->stream = FUNC_0(VAR_4->filename, "wb");
    if(!VAR_4->stream)
      return -1;
  }
  return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_4->stream);
}
