
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gds_vector {int dummy; } ;
struct evbuf_header {int length; } ;


 int VAR_0 ;
 int FUNC_0 (struct gds_vector*) ;
 struct gds_vector* FUNC_1 (struct evbuf_header*,void*,int ) ;

__attribute__((used)) static void FUNC_2(struct evbuf_header *VAR_1)
{
 struct gds_vector *VAR_2;

 VAR_2 = FUNC_1(VAR_1 + 1, (void *) VAR_1 + VAR_1->length,
     VAR_0);
 if (VAR_2)
  FUNC_0(VAR_2);
}
