
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct circ_buf {int * buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct circ_buf*) ;
 void* FUNC_1 (int,int ) ;
 int FUNC_2 (struct circ_buf*) ;

__attribute__((used)) static struct circ_buf *FUNC_3(void)
{
 struct circ_buf *VAR_2;
 VAR_2 = FUNC_1(sizeof(struct circ_buf), VAR_1);
 if (VAR_2 == ((void*)0))
  return ((void*)0);
 VAR_2->buf = FUNC_1(VAR_0, VAR_1);
 if (VAR_2->buf == ((void*)0)) {
  FUNC_0(VAR_2);
  return ((void*)0);
 }
 FUNC_2(VAR_2);
 return VAR_2;
}
