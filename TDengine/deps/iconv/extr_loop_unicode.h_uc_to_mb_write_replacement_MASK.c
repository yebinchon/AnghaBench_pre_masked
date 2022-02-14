
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uc_to_mb_fallback_locals {scalar_t__ l_errno; size_t l_outbytesleft; size_t l_outbuf; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (size_t,char const*,size_t) ;

__attribute__((used)) static void FUNC_1 (const char *VAR_1, size_t VAR_2,
                                        void* VAR_3)
{
  struct uc_to_mb_fallback_locals * VAR_4 =
    (struct uc_to_mb_fallback_locals *) VAR_3;

  if (VAR_4->l_errno == 0) {

    if (VAR_4->l_outbytesleft < VAR_2)
      VAR_4->l_errno = VAR_0;
    else {
      FUNC_0(VAR_4->l_outbuf, VAR_1, VAR_2);
      VAR_4->l_outbuf += VAR_2;
      VAR_4->l_outbytesleft -= VAR_2;
    }
  }
}
