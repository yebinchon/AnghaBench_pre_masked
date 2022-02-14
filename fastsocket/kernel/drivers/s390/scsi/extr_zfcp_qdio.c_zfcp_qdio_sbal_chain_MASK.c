
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct zfcp_queue_req {scalar_t__ sbal_number; scalar_t__ sbale_curr; int sbal_last; int sbal_limit; } ;
struct zfcp_qdio {int dummy; } ;
struct qdio_buffer_element {int sflags; int eflags; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct qdio_buffer_element* FUNC_1 (struct zfcp_qdio*,struct zfcp_queue_req*) ;
 struct qdio_buffer_element* FUNC_2 (struct zfcp_qdio*,struct zfcp_queue_req*) ;

__attribute__((used)) static struct qdio_buffer_element *
FUNC_3(struct zfcp_qdio *VAR_4, struct zfcp_queue_req *VAR_5,
       u8 VAR_6)
{
 struct qdio_buffer_element *VAR_7;


 VAR_7 = FUNC_1(VAR_4, VAR_5);
 VAR_7->eflags |= VAR_2;


 if (VAR_5->sbal_last == VAR_5->sbal_limit)
  return ((void*)0);


 VAR_7 = FUNC_2(VAR_4, VAR_5);
 VAR_7->sflags |= VAR_3;


 VAR_5->sbal_last++;
 VAR_5->sbal_last %= VAR_1;


 VAR_5->sbal_number++;
 FUNC_0(VAR_5->sbal_number > VAR_0);


 VAR_5->sbale_curr = 0;


 VAR_7 = FUNC_1(VAR_4, VAR_5);
 VAR_7->sflags |= VAR_6;

 return VAR_7;
}
