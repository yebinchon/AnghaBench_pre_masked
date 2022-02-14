
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct i1480 {int dev; } ;
struct fw_hdr {struct fw_hdr* next; scalar_t__ length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 int FUNC_1 (struct i1480*,struct fw_hdr*,unsigned int,char const*,int *,int *) ;
 int FUNC_2 (struct fw_hdr*) ;
 int FUNC_3 (struct fw_hdr*) ;
 struct fw_hdr* FUNC_4 (int,int ) ;

__attribute__((used)) static
int FUNC_5(struct i1480 *VAR_3, struct fw_hdr **VAR_4,
   const char *VAR_5, size_t VAR_6)
{
 int VAR_7;
 unsigned VAR_8 = 0;
 u32 *VAR_9 = (u32 *) VAR_5, *VAR_10, *VAR_11;
 struct fw_hdr *VAR_12, **VAR_13 = VAR_4;

 VAR_7 = -VAR_0;

 if (VAR_6 % sizeof(u32) != 0)
  goto error;
 if ((unsigned long) VAR_5 % sizeof(u16) != 0)
  goto error;
 *VAR_4 = ((void*)0);
 VAR_10 = VAR_9;
 VAR_11 = (u32 *) (VAR_5 + VAR_6);
 while (VAR_10 < VAR_11) {
  VAR_7 = -VAR_1;
  VAR_12 = FUNC_4(sizeof(*VAR_12), VAR_2);
  if (VAR_12 == ((void*)0)) {
   FUNC_0(VAR_3->dev, "Cannot allocate fw header "
          "for chunk #%u\n", VAR_8);
   goto error_alloc;
  }
  VAR_7 = FUNC_1(VAR_3, VAR_12, VAR_8,
         VAR_5, VAR_10, VAR_11);
  if (VAR_7 < 0)
   goto error_load;
  VAR_10 += 2 + VAR_12->length;
  *VAR_13 = VAR_12;
  VAR_13 = &VAR_12->next;
  VAR_8++;
 };
 *VAR_13 = ((void*)0);
 return 0;

error_load:
 FUNC_3(VAR_12);
error_alloc:
 FUNC_2(*VAR_4);
error:
 return VAR_7;
}
