
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t rem; int overflow; size_t data; } ;
typedef TYPE_1__ CSeqOutStreamBuf ;


 int FUNC_0 (size_t,void const*,size_t) ;

__attribute__((used)) static size_t FUNC_1(void *VAR_0, const void *VAR_1, size_t VAR_2)
{
  CSeqOutStreamBuf *VAR_3 = (CSeqOutStreamBuf *)VAR_0;
  if (VAR_3->rem < VAR_2)
  {
    VAR_2 = VAR_3->rem;
    VAR_3->overflow = 1;
  }
  FUNC_0(VAR_3->data, VAR_1, VAR_2);
  VAR_3->rem -= VAR_2;
  VAR_3->data += VAR_2;
  return VAR_2;
}
