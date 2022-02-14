
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct resource_lists {struct pci_resource* p_mem_head; struct pci_resource* mem_head; struct pci_resource* io_head; struct pci_resource* bus_head; struct irq_mapping* irqs; } ;
struct pci_resource {int base; int length; struct pci_resource* next; } ;
struct pci_func {int bus; int device; int is_a_board; int configured; struct pci_resource* mem_head; struct pci_resource* p_mem_head; struct pci_resource* io_head; struct pci_resource* bus_head; scalar_t__ status; scalar_t__ function; } ;
struct pci_bus {int number; } ;
struct irq_mapping {int barber_pole; int* interrupt; int valid_INT; } ;
struct controller {struct pci_bus* pci_bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int FUNC_0 (int,scalar_t__) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_1 (struct controller*,struct pci_func*,int,struct resource_lists*) ;
 int FUNC_2 (struct resource_lists*) ;
 int VAR_26 ;
 scalar_t__ VAR_27 ;
 int VAR_28 ;
 int FUNC_3 (int,int,int,int) ;
 struct pci_func* FUNC_4 (int) ;
 int FUNC_5 (char*,...) ;
 struct pci_resource* FUNC_6 (struct pci_resource**,int) ;
 struct pci_resource* FUNC_7 (struct pci_resource**,struct pci_resource**,int) ;
 struct pci_resource* FUNC_8 (struct pci_resource**,int) ;
 struct pci_resource* FUNC_9 (struct pci_resource**,int) ;
 struct pci_resource* FUNC_10 (struct pci_resource**,int) ;
 int FUNC_11 (struct pci_resource*) ;
 struct pci_resource* FUNC_12 (int,int ) ;
 int FUNC_13 (struct pci_resource*,struct pci_resource*,int) ;
 int FUNC_14 (struct pci_bus*,unsigned int,int,int*) ;
 int FUNC_15 (struct pci_bus*,unsigned int,int,int*) ;
 int FUNC_16 (struct pci_bus*,unsigned int,int ,int) ;
 int FUNC_17 (struct pci_bus*,unsigned int,int,int) ;
 int FUNC_18 (struct pci_bus*,unsigned int,int ,int) ;
 int FUNC_19 (struct pci_resource**,struct pci_resource*) ;

__attribute__((used)) static int FUNC_20(struct controller *VAR_29, struct pci_func *VAR_30,
       u8 VAR_31,
       struct resource_lists *VAR_32)
{
 int VAR_33;
 u8 VAR_34 = 0;
 u8 VAR_35;
 u8 VAR_36;
 u8 VAR_37;
 u16 VAR_38;
 u16 VAR_39;
 u32 VAR_40;
 u32 VAR_41;
 u32 VAR_42;
 u32 VAR_43;
 u32 VAR_44;
 unsigned int VAR_45;
 struct pci_resource *VAR_46;
 struct pci_resource *VAR_47;
 struct pci_resource *VAR_48;
 struct pci_resource *VAR_49;
 struct pci_resource *VAR_50;
 struct pci_resource *VAR_51;
 struct pci_resource *VAR_52;
 struct pci_resource *VAR_53;
 struct irq_mapping VAR_54;
 struct pci_func *VAR_55;
 struct pci_bus *VAR_56;
 struct resource_lists VAR_57;

 VAR_56 = VAR_29->pci_bus;
 VAR_56->number = VAR_30->bus;
 VAR_45 = FUNC_0(VAR_30->device, VAR_30->function);


 VAR_41 = FUNC_14(VAR_56, VAR_45, VAR_9, &VAR_35);
 if (VAR_41)
  return VAR_41;

 if ((VAR_35 & 0x7F) == VAR_10) {

  FUNC_5("set Primary bus = %d\n", VAR_30->bus);
  VAR_41 = FUNC_16(VAR_56, VAR_45, VAR_21, VAR_30->bus);
  if (VAR_41)
   return VAR_41;


  FUNC_5("find ranges of buses to use\n");
  VAR_49 = FUNC_9(&(VAR_32->bus_head), 1);


  if (!VAR_49)
   return -VAR_1;


  VAR_35 = VAR_49->base;
  FUNC_5("set Secondary bus = %d\n", VAR_49->base);
  VAR_41 = FUNC_16(VAR_56, VAR_45, VAR_23, VAR_35);
  if (VAR_41)
   return VAR_41;


  VAR_35 = VAR_49->base + VAR_49->length - 1;
  FUNC_5("set subordinate bus = %d\n", VAR_49->base + VAR_49->length - 1);
  VAR_41 = FUNC_16(VAR_56, VAR_45, VAR_25, VAR_35);
  if (VAR_41)
   return VAR_41;


  VAR_35 = 0x40;
  VAR_41 = FUNC_16(VAR_56, VAR_45, VAR_24, VAR_35);
  if (VAR_41)
   return VAR_41;
  VAR_41 = FUNC_16(VAR_56, VAR_45, VAR_16, VAR_35);
  if (VAR_41)
   return VAR_41;


  VAR_35 = 0x08;
  VAR_41 = FUNC_16(VAR_56, VAR_45, VAR_7, VAR_35);
  if (VAR_41)
   return VAR_41;


  VAR_48 = FUNC_9(&(VAR_32->io_head), 0x1000);
  if (!VAR_48)
   return -VAR_1;
  VAR_46 = FUNC_9(&(VAR_32->mem_head), 0x100000);
  if (!VAR_46)
   return -VAR_1;
  VAR_47 = FUNC_9(&(VAR_32->p_mem_head), 0x100000);
  if (!VAR_47)
   return -VAR_1;
  FUNC_5("Setup the IO, memory, and prefetchable windows\n");
  FUNC_5("io_node\n");
  FUNC_5("(base, len, next) (%x, %x, %p)\n", VAR_48->base,
     VAR_48->length, VAR_48->next);
  FUNC_5("mem_node\n");
  FUNC_5("(base, len, next) (%x, %x, %p)\n", VAR_46->base,
     VAR_46->length, VAR_46->next);
  FUNC_5("p_mem_node\n");
  FUNC_5("(base, len, next) (%x, %x, %p)\n", VAR_47->base,
     VAR_47->length, VAR_47->next);


  if (!VAR_32->irqs) {
   VAR_54.barber_pole = 0;
   VAR_54.interrupt[0] = 0;
   VAR_54.interrupt[1] = 0;
   VAR_54.interrupt[2] = 0;
   VAR_54.interrupt[3] = 0;
   VAR_54.valid_INT = 0;
  } else {
   VAR_54.barber_pole = VAR_32->irqs->barber_pole;
   VAR_54.interrupt[0] = VAR_32->irqs->interrupt[0];
   VAR_54.interrupt[1] = VAR_32->irqs->interrupt[1];
   VAR_54.interrupt[2] = VAR_32->irqs->interrupt[2];
   VAR_54.interrupt[3] = VAR_32->irqs->interrupt[3];
   VAR_54.valid_INT = VAR_32->irqs->valid_INT;
  }



  VAR_57.bus_head = VAR_49;
  VAR_57.io_head = VAR_48;
  VAR_57.mem_head = VAR_46;
  VAR_57.p_mem_head = VAR_47;
  VAR_57.irqs = &VAR_54;




  VAR_53 = FUNC_12(sizeof(*VAR_53), VAR_2);
  VAR_52 = FUNC_12(sizeof(*VAR_52), VAR_2);
  VAR_50 = FUNC_12(sizeof(*VAR_50), VAR_2);
  VAR_51 = FUNC_12(sizeof(*VAR_51), VAR_2);

  if (!VAR_53 || !VAR_52 || !VAR_50 || !VAR_51) {
   FUNC_11(VAR_53);
   FUNC_11(VAR_52);
   FUNC_11(VAR_50);
   FUNC_11(VAR_51);

   return 1;
  }

  FUNC_13(VAR_53, VAR_49, sizeof(struct pci_resource));

  VAR_49->base += 1;
  VAR_49->length -= 1;
  VAR_49->next = ((void*)0);



  if (VAR_48) {
   FUNC_13(VAR_52, VAR_48, sizeof(struct pci_resource));
   VAR_48->next = ((void*)0);


   VAR_35 = VAR_48->base >> 8;
   VAR_41 = FUNC_16(VAR_56, VAR_45, VAR_14, VAR_35);

   VAR_35 = (VAR_48->base + VAR_48->length - 1) >> 8;
   VAR_41 = FUNC_16(VAR_56, VAR_45, VAR_15, VAR_35);
  } else {
   FUNC_11(VAR_52);
   VAR_52 = ((void*)0);
  }




  if (VAR_46) {
   FUNC_13(VAR_50, VAR_46, sizeof(struct pci_resource));
   VAR_46->next = ((void*)0);


   VAR_39 = VAR_46->base >> 16;
   VAR_41 = FUNC_18(VAR_56, VAR_45, VAR_17, VAR_39);

   VAR_39 = (VAR_46->base + VAR_46->length - 1) >> 16;
   VAR_41 = FUNC_18(VAR_56, VAR_45, VAR_18, VAR_39);
  } else {
   VAR_39 = 0xFFFF;
   VAR_41 = FUNC_18(VAR_56, VAR_45, VAR_17, VAR_39);

   VAR_39 = 0x0000;
   VAR_41 = FUNC_18(VAR_56, VAR_45, VAR_18, VAR_39);

   FUNC_11(VAR_50);
   VAR_50 = ((void*)0);
  }

  FUNC_13(VAR_51, VAR_47, sizeof(struct pci_resource));
  VAR_47->next = ((void*)0);


  VAR_39 = VAR_47->base >> 16;
  VAR_41 = FUNC_18 (VAR_56, VAR_45, VAR_19, VAR_39);

  VAR_39 = (VAR_47->base + VAR_47->length - 1) >> 16;
  VAR_41 = FUNC_18 (VAR_56, VAR_45, VAR_20, VAR_39);



  VAR_54.barber_pole--;

  VAR_41 = 0;


  for (VAR_36 = 0; (VAR_36 <= 0x1F) && !VAR_41; VAR_36++) {
   VAR_54.barber_pole = (VAR_54.barber_pole + 1) & 0x03;

   VAR_44 = 0xFFFFFFFF;
   VAR_56->number = VAR_53->base;
   FUNC_15 (VAR_56, FUNC_0(VAR_36, 0), 0x00, &VAR_44);
   VAR_56->number = VAR_30->bus;

   if (VAR_44 != 0xFFFFFFFF) {

    VAR_55 = FUNC_4(VAR_53->base);

    if (VAR_55 == ((void*)0)) {
     VAR_41 = -VAR_1;
     continue;
    }

    VAR_55->bus = VAR_53->base;
    VAR_55->device = VAR_36;
    VAR_55->function = 0;
    VAR_55->is_a_board = 1;
    VAR_55->status = 0;

    VAR_41 = FUNC_1(VAR_29, VAR_55, 1, &VAR_57);
    FUNC_5("configure_new_device rc=0x%x\n",VAR_41);
   }
  }

  if (VAR_41)
   goto free_and_out;

  if (VAR_32->irqs) {
   VAR_32->irqs->interrupt[0] = VAR_54.interrupt[0];
   VAR_32->irqs->interrupt[1] = VAR_54.interrupt[1];
   VAR_32->irqs->interrupt[2] = VAR_54.interrupt[2];
   VAR_32->irqs->interrupt[3] = VAR_54.interrupt[3];
   VAR_32->irqs->valid_INT = VAR_54.valid_INT;
  } else if (!VAR_31) {

   for (VAR_33 = 0; VAR_33 < 4; VAR_33++) {
    if (VAR_54.valid_INT & (0x01 << VAR_33)) {
     VAR_41 = FUNC_3(VAR_30->bus, VAR_30->device,
          VAR_33 + 1, VAR_54.interrupt[VAR_33]);
     if (VAR_41)
      goto free_and_out;
    }
   }
  }



  if (VAR_53 && VAR_49 && VAR_57.bus_head) {
   VAR_53->length = VAR_49->base - VAR_53->base;

   VAR_53->next = VAR_30->bus_head;
   VAR_30->bus_head = VAR_53;

   VAR_35 = VAR_57.bus_head->base - 1;


   VAR_41 = FUNC_16 (VAR_56, VAR_45, VAR_25, VAR_35);

   if (VAR_57.bus_head->length == 0) {
    FUNC_11(VAR_57.bus_head);
    VAR_57.bus_head = ((void*)0);
   } else {
    FUNC_19(&(VAR_32->bus_head), VAR_57.bus_head);
   }
  }



  if (VAR_52 && VAR_57.io_head) {
   VAR_48 = FUNC_7(&(VAR_57.io_head),
              &VAR_52, 0x1000);


   if (VAR_48) {
    VAR_52->base = VAR_48->base + VAR_48->length;

    VAR_35 = (VAR_52->base) >> 8;
    VAR_41 = FUNC_18 (VAR_56, VAR_45, VAR_14, VAR_35);

    FUNC_19(&(VAR_32->io_head), VAR_48);
   }

   VAR_48 = FUNC_6(&(VAR_57.io_head), 0x1000);


   if (VAR_48) {


    VAR_52->length = VAR_48->base - VAR_52->base;


    if (VAR_52->length) {
     VAR_52->next = VAR_30->io_head;
     VAR_30->io_head = VAR_52;

     VAR_35 = (VAR_48->base - 1) >> 8;
     VAR_41 = FUNC_16 (VAR_56, VAR_45, VAR_15, VAR_35);

     FUNC_19(&(VAR_32->io_head), VAR_48);
    } else {

     VAR_39 = 0x0000;
     VAR_41 = FUNC_18 (VAR_56, VAR_45, VAR_15, VAR_39);

     FUNC_19(&(VAR_32->io_head), VAR_48);
     FUNC_11(VAR_52);
    }
   } else {

    VAR_52->next = VAR_30->io_head;
    VAR_30->io_head = VAR_52;
   }
  } else if (VAR_52) {

   VAR_52->next = VAR_30->io_head;
   VAR_30->io_head = VAR_52;
  }


  if (VAR_50 && VAR_57.mem_head) {
   VAR_46 = FUNC_7(&(VAR_57. mem_head),
        &VAR_50, 0x100000);


   if (VAR_46) {
    VAR_50->base = VAR_46->base + VAR_46->length;

    VAR_39 = (VAR_50->base) >> 16;
    VAR_41 = FUNC_18 (VAR_56, VAR_45, VAR_17, VAR_39);

    FUNC_19(&(VAR_32->mem_head), VAR_46);
   }

   VAR_46 = FUNC_6(&(VAR_57.mem_head), 0x100000);


   if (VAR_46) {


    VAR_50->length = VAR_46->base - VAR_50->base;

    if (VAR_50->length) {
     VAR_50->next = VAR_30->mem_head;
     VAR_30->mem_head = VAR_50;


     VAR_39 = (VAR_46->base - 1) >> 16;
     VAR_41 = FUNC_18 (VAR_56, VAR_45, VAR_18, VAR_39);


     FUNC_19(&(VAR_32->mem_head), VAR_46);
    } else {

     VAR_39 = 0x0000;
     VAR_41 = FUNC_18 (VAR_56, VAR_45, VAR_18, VAR_39);

     FUNC_19(&(VAR_32->mem_head), VAR_46);
     FUNC_11(VAR_50);
    }
   } else {

    VAR_50->next = VAR_30->mem_head;
    VAR_30->mem_head = VAR_50;
   }
  } else if (VAR_50) {

   VAR_50->next = VAR_30->mem_head;
   VAR_30->mem_head = VAR_50;
  }


  if (VAR_51 && VAR_57.p_mem_head) {
   VAR_47 = FUNC_7(&(VAR_57.p_mem_head),
          &VAR_51, 0x100000);


   if (VAR_47) {
    VAR_51->base = VAR_47->base + VAR_47->length;

    VAR_39 = (VAR_51->base) >> 16;
    VAR_41 = FUNC_18 (VAR_56, VAR_45, VAR_19, VAR_39);

    FUNC_19(&(VAR_32->p_mem_head), VAR_47);
   }

   VAR_47 = FUNC_6(&(VAR_57.p_mem_head), 0x100000);


   if (VAR_47) {


    VAR_51->length = VAR_47->base - VAR_51->base;


    if (VAR_51->length) {
     VAR_51->next = VAR_30->p_mem_head;
     VAR_30->p_mem_head = VAR_51;

     VAR_39 = (VAR_47->base - 1) >> 16;
     VAR_41 = FUNC_18 (VAR_56, VAR_45, VAR_20, VAR_39);

     FUNC_19(&(VAR_32->p_mem_head), VAR_47);
    } else {

     VAR_39 = 0x0000;
     VAR_41 = FUNC_18 (VAR_56, VAR_45, VAR_20, VAR_39);

     FUNC_19(&(VAR_32->p_mem_head), VAR_47);
     FUNC_11(VAR_51);
    }
   } else {

    VAR_51->next = VAR_30->p_mem_head;
    VAR_30->p_mem_head = VAR_51;
   }
  } else if (VAR_51) {

   VAR_51->next = VAR_30->p_mem_head;
   VAR_30->p_mem_head = VAR_51;
  }





  VAR_38 = 0x0157;





  VAR_41 = FUNC_18 (VAR_56, VAR_45, VAR_8, VAR_38);


  VAR_38 = 0x07;


  VAR_41 = FUNC_18 (VAR_56, VAR_45, VAR_6, VAR_38);
 } else if ((VAR_35 & 0x7F) == VAR_11) {

  VAR_41 = FUNC_14 (VAR_56, VAR_45, 0x0B, &VAR_37);

  if (VAR_37 == VAR_4) {

   return VAR_0;
  }

  for (VAR_33 = 0x10; VAR_33 <= 0x24; VAR_33 += 4) {
   VAR_42 = 0xFFFFFFFF;

   FUNC_5("CND: bus=%d, devfn=%d, offset=%d\n", VAR_56->number, VAR_45, VAR_33);
   VAR_41 = FUNC_17 (VAR_56, VAR_45, VAR_33, VAR_42);

   VAR_41 = FUNC_15 (VAR_56, VAR_45, VAR_33, &VAR_42);
   FUNC_5("CND: base = 0x%x\n", VAR_42);

   if (VAR_42) {
    if ((VAR_42 & 0x03L) == 0x01) {



     VAR_43 = VAR_42 & 0xFFFFFFFC;
     VAR_43 = ~VAR_43 + 1;

     FUNC_5("CND:      length = 0x%x\n", VAR_43);
     VAR_48 = FUNC_8(&(VAR_32->io_head), VAR_43);
     FUNC_5("Got io_node start = %8.8x, length = %8.8x next (%p)\n",
         VAR_48->base, VAR_48->length, VAR_48->next);
     FUNC_5("func (%p) io_head (%p)\n", VAR_30, VAR_30->io_head);


     if (VAR_48) {
      VAR_43 = VAR_48->base;

      VAR_48->next = VAR_30->io_head;
      VAR_30->io_head = VAR_48;
     } else
      return -VAR_1;
    } else if ((VAR_42 & 0x0BL) == 0x08) {

     VAR_43 = VAR_42 & 0xFFFFFFF0;
     VAR_43 = ~VAR_43 + 1;

     FUNC_5("CND:      length = 0x%x\n", VAR_43);
     VAR_47 = FUNC_10(&(VAR_32->p_mem_head), VAR_43);


     if (VAR_47) {
      VAR_43 = VAR_47->base;

      VAR_47->next = VAR_30->p_mem_head;
      VAR_30->p_mem_head = VAR_47;
     } else
      return -VAR_1;
    } else if ((VAR_42 & 0x0BL) == 0x00) {

     VAR_43 = VAR_42 & 0xFFFFFFF0;
     VAR_43 = ~VAR_43 + 1;

     FUNC_5("CND:      length = 0x%x\n", VAR_43);
     VAR_46 = FUNC_10(&(VAR_32->mem_head), VAR_43);


     if (VAR_46) {
      VAR_43 = VAR_46->base;

      VAR_46->next = VAR_30->mem_head;
      VAR_30->mem_head = VAR_46;
     } else
      return -VAR_1;
    } else if ((VAR_42 & 0x0BL) == 0x04) {

     VAR_43 = VAR_42 & 0xFFFFFFF0;
     VAR_43 = ~VAR_43 + 1;

     FUNC_5("CND:      length = 0x%x\n", VAR_43);
     VAR_46 = FUNC_10(&(VAR_32->mem_head), VAR_43);


     if (VAR_46) {
      VAR_43 = VAR_46->base;

      VAR_46->next = VAR_30->mem_head;
      VAR_30->mem_head = VAR_46;
     } else
      return -VAR_1;
    } else if ((VAR_42 & 0x0BL) == 0x06) {

     return 1;
    } else {

     return VAR_3;
    }

    VAR_41 = FUNC_17(VAR_56, VAR_45, VAR_33, VAR_43);


    if ((VAR_42 & 0x07L) == 0x04) {
     VAR_33 += 4;





     VAR_43 = 0;
     VAR_41 = FUNC_17(VAR_56, VAR_45, VAR_33, VAR_43);
    }
   }
  }
  if (VAR_27) {

   VAR_41 = FUNC_14 (VAR_56, VAR_45,
    VAR_13, &VAR_35);




   if (VAR_35 && VAR_32->irqs &&
       (VAR_32->irqs->valid_INT &
        (0x01 << ((VAR_35 + VAR_32->irqs->barber_pole - 1) & 0x03)))) {

    VAR_34 = VAR_32->irqs->interrupt[(VAR_35 +
     VAR_32->irqs->barber_pole - 1) & 0x03];
   } else {

    VAR_41 = FUNC_14 (VAR_56, VAR_45, 0x0B, &VAR_37);

    if (VAR_37 == VAR_5)
     VAR_34 = VAR_26;
    else
     VAR_34 = VAR_28;
   }


   VAR_41 = FUNC_16 (VAR_56, VAR_45, VAR_12, VAR_34);
  }

  if (!VAR_31) {
   VAR_41 = FUNC_3(VAR_30->bus, VAR_30->device, VAR_35, VAR_34);
   if (VAR_41)
    return 1;
  } else {


   VAR_32->irqs->interrupt[(VAR_35 + VAR_32->irqs->barber_pole - 1) & 0x03] = VAR_34;
   VAR_32->irqs->valid_INT |= 0x01 << (VAR_35 + VAR_32->irqs->barber_pole - 1) & 0x03;
  }


  VAR_35 = 0x40;
  VAR_41 = FUNC_16(VAR_56, VAR_45,
     VAR_16, VAR_35);


  VAR_35 = 0x08;
  VAR_41 = FUNC_16(VAR_56, VAR_45,
     VAR_7, VAR_35);


  VAR_40 = 0x00L;
  VAR_41 = FUNC_18(VAR_56, VAR_45,
     VAR_22, VAR_40);


  VAR_39 = 0x0157;





  VAR_41 = FUNC_18 (VAR_56, VAR_45,
     VAR_8, VAR_39);
 } else {

  return VAR_0;
 }

 VAR_30->configured = 1;

 return 0;
free_and_out:
 FUNC_2 (&VAR_57);

 FUNC_19(&(VAR_32-> bus_head), VAR_53);
 FUNC_19(&(VAR_32-> io_head), VAR_52);
 FUNC_19(&(VAR_32-> mem_head), VAR_50);
 FUNC_19(&(VAR_32-> p_mem_head), VAR_51);
 return VAR_41;
}
