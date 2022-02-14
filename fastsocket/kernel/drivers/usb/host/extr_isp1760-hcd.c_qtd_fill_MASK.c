
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct isp1760_qtd {int length; int toggle; int packet_type; void* data_buffer; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 size_t VAR_0 ;

__attribute__((used)) static int FUNC_2(struct isp1760_qtd *VAR_1, void *VAR_2, size_t VAR_3,
  u32 VAR_4)
{
 int VAR_5;

 VAR_1->data_buffer = VAR_2;
 VAR_1->packet_type = FUNC_1(VAR_4);
 VAR_1->toggle = FUNC_0(VAR_4);

 if (VAR_3 > VAR_0)
  VAR_5 = VAR_0;
 else
  VAR_5 = VAR_3;

 VAR_1->length = VAR_5;
 return VAR_5;
}
