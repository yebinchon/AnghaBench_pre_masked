
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int acpi_handle ;
typedef int acpi_event_status ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__,int *) ;
 int FUNC_2 (scalar_t__,int *) ;
 int FUNC_3 (int ,scalar_t__,int ,int *) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_4(u32 VAR_5, acpi_event_status *VAR_6, acpi_handle *VAR_7)
{
 int VAR_8 = 0;

 if (VAR_5 >= VAR_4 + VAR_1)
  goto end;

 if (VAR_5 < VAR_4) {
  VAR_8 = FUNC_2(VAR_5, VAR_7);
  if (VAR_8) {
   FUNC_0((VAR_2, VAR_3,
    "Invalid GPE 0x%x\n", VAR_5));
   goto end;
  }
  VAR_8 = FUNC_3(*VAR_7, VAR_5,
      VAR_0, VAR_6);
 } else if (VAR_5 < (VAR_4 + VAR_1))
  VAR_8 = FUNC_1(VAR_5 - VAR_4, VAR_6);

end:
 return VAR_8;
}
