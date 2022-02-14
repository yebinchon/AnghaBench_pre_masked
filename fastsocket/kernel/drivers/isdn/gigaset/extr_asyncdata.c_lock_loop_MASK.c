
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inbuf_t {struct cardstate* cs; } ;
struct cardstate {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,unsigned char*) ;
 int FUNC_1 (struct cardstate*,unsigned char*,int) ;

__attribute__((used)) static inline int FUNC_2(unsigned char *VAR_1, int VAR_2,
       struct inbuf_t *VAR_3)
{
 struct cardstate *VAR_4 = VAR_3->cs;

 FUNC_0(VAR_0, "received response",
      VAR_2, VAR_1);
 FUNC_1(VAR_4, VAR_1, VAR_2);

 return VAR_2;
}
